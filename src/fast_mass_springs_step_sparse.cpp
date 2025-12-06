#include "fast_mass_springs_step_sparse.h"
#include <igl/matlab_format.h>

#ifndef M_PI
#define M_PI 3.14159265358979323846
#endif

extern std::vector<Driver> drivers;


void fast_mass_springs_step_sparse(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & E,
  const Eigen::VectorXi & b,
  const double delta_t,
  const double t,
  const Eigen::MatrixXd & fext,
  const Eigen::VectorXd & r,
  const Eigen::SparseMatrix<double>  & M,
  const Eigen::SparseMatrix<double>  & A,
  const Eigen::SparseMatrix<double>  & C,
  const Eigen::SparseMatrix<double>  & K,
  const Eigen::SimplicialLLT<Eigen::SparseMatrix<double> > & prefactorization,
  const Eigen::MatrixXd & Uprev,
  const Eigen::MatrixXd & Ucur,
  Eigen::MatrixXd & Unext)
{
  //////////////////////////////////////////////////////////////////////////////
  
    const int n = V.rows();
    const int dim = V.cols();
    const int mE = E.rows();
    const double inv_dt2 = 1.0 / (delta_t * delta_t);
    const double w = 1e10;

    // compute y1 = 1/dt^2 M (2 * Ucur - Uprev) + fext
    Eigen::MatrixXd y1 = Eigen::MatrixXd::Zero(n, dim);
    for (int i = 0; i < n; ++i) {
        for (int coord = 0; coord < dim; ++coord) {
            double mass = M.coeff(i, i); // sparse diagonal
            y1(i, coord) = inv_dt2 * mass * (2.0 * Ucur(i, coord) - Uprev(i, coord)) + fext(i, coord);
        }
    }

    // compute y2 = w * C^T * C * V
    Eigen::MatrixXd y2 = w * (C.transpose() * (C * V));

    // initialize Unext
    Unext = Ucur;

    // local-global iterations
    for (int iter = 0; iter < 50; ++iter) {
        // LOCAL STEP: compute d_ij
        Eigen::MatrixXd d = Eigen::MatrixXd::Zero(mE, dim);

        for (int e = 0; e < mE; ++e) {
            int i = E(e, 0);
            int j = E(e, 1);

            Eigen::RowVectorXd pi = Unext.row(i);
            Eigen::RowVectorXd pj = Unext.row(j);
            Eigen::VectorXd diff = (pj - pi).transpose();
            double len = diff.norm();

            if (len > 1e-8) {
                d.row(e) = (r(e) / len) * diff.transpose();
            }
            else {
                d.row(e).setZero();
            }
        }

        // GLOBAL STEP: Solve Q p = b = k * A^T * d + y1 + y2
        Eigen::MatrixXd b_formula = (A.transpose() * (K * d)) + y1 + y2;

        // solve per coordinate
        for (int coord = 0; coord < dim; ++coord) {
            Eigen::VectorXd rhs = b_formula.col(coord);
            Eigen::VectorXd sol = prefactorization.solve(rhs);
            Unext.col(coord) = sol;
        }
    }

    // apply drivers
    for (const Driver& drv : drivers)
    {
        // drv.vertex is 0-based
        Eigen::RowVector3d disp = drv.amplitude *
            sin(2.0 * M_PI * drv.frequency * t + drv.phase) *
            drv.direction;
        Unext.row(drv.vertex) = V.row(drv.vertex) + disp;
    }
  
  //////////////////////////////////////////////////////////////////////////////
}
