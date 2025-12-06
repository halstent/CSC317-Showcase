#include "fast_mass_springs_precomputation_dense.h"
#include "signed_incidence_matrix_dense.h"
#include <Eigen/Dense>
#include <stdexcept>

bool fast_mass_springs_precomputation_dense(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & E,
  const double k,
  const Eigen::VectorXd & m,
  const Eigen::VectorXi & b,
  const double delta_t,
  Eigen::VectorXd & r,
  Eigen::MatrixXd & M,
  Eigen::MatrixXd & A,
  Eigen::MatrixXd & C,
  Eigen::LLT<Eigen::MatrixXd> & prefactorization)
{
  /////////////////////////////////////////////////////////////////////////////
  
    // define constants
    const int n = static_cast<int>(V.rows());   // number of vertices
    const int mE = static_cast<int>(E.rows());  // number of edges
    const int npin = static_cast<int>(b.size()); // number of pinned vertices
    const double inv_dt2 = 1.0 / (delta_t * delta_t);
    const double w = 1e10; // weight of pinned vertices

    // build M matrix (n x n diagonal)
    M = Eigen::MatrixXd::Zero(n, n);
    for (int i = 0; i < n; ++i) M(i, i) = m(i);

    // compute rest lengths vector r
    r.resize(mE);
    for (int e = 0; e < mE; ++e) {
        int i = E(e, 0);
        int j = E(e, 1);
        r(e) = (V.row(j) - V.row(i)).norm();
    }

    // build signed incidence matrix A using previous function (mE x n)
    signed_incidence_matrix_dense(n, E, A);

    // build selection matrix C (npin x n)
    // C_i,j = 1 if the i-th pinned vertex has index j, 0 otherwise.
    C = Eigen::MatrixXd::Zero(npin, n);
    for (int i = 0; i < npin; ++i) C(i, b(i)) = 1.0;

    // form Q = Q1 + Q2
    // Q1 := k A^T A + (1/dt^2) M
    // Q2 := w * C^T C
    // A.transpose() * A is n x n
    Eigen::MatrixXd Q1 = k * (A.transpose() * A) + inv_dt2 * M;
    Eigen::MatrixXd Q2 = w * C.transpose() * C;
    Eigen::MatrixXd Q = Q1 + Q2;

  /////////////////////////////////////////////////////////////////////////////
  prefactorization.compute(Q);
  return prefactorization.info() != Eigen::NumericalIssue;
}
