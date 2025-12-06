#include "fast_mass_springs_precomputation_sparse.h"
#include "signed_incidence_matrix_sparse.h"
#include <vector>
#include <stdexcept>

extern std::vector<Driver> drivers;

bool fast_mass_springs_precomputation_sparse(
  const Eigen::MatrixXd & V,
  const Eigen::MatrixXi & E,
  const Eigen::VectorXd & k,
  const Eigen::VectorXd & m,
  const Eigen::VectorXi & b,
  const double delta_t,
  Eigen::VectorXd & r,
  Eigen::SparseMatrix<double>  & M,
  Eigen::SparseMatrix<double>  & A,
  Eigen::SparseMatrix<double>  & C,
  Eigen::SparseMatrix<double>  & K,
  Eigen::SimplicialLLT<Eigen::SparseMatrix<double> > & prefactorization)
{
  /////////////////////////////////////////////////////////////////////////////
  
    const int n = static_cast<int>(V.rows());   // number of vertices
    const int mE = static_cast<int>(E.rows());  // number of edges
    const int npin = static_cast<int>(b.size()); // number of pinned vertices
    const double inv_dt2 = 1.0 / (delta_t * delta_t);
    const double w = 1e10; // weight of pinned vertices

    // build M (diagonal sparse)
    std::vector<Eigen::Triplet<double>> M_triplets;
    M_triplets.reserve(n);
    for (int i = 0; i < n; ++i)
        M_triplets.emplace_back(i, i, m(i));
    M.resize(n, n);
    M.setFromTriplets(M_triplets.begin(), M_triplets.end());

	// build K (diagonal sparse)
    std::vector<Eigen::Triplet<double>> K_triplets;
    K.reserve(mE);
    for (int e = 0; e < mE; ++e)
        K_triplets.emplace_back(e, e, k(e)); // k(e) is per-edge spring constant
	K.resize(mE, mE);
    K.setFromTriplets(K_triplets.begin(), K_triplets.end());

    // compute rest lengths vector r
    r.resize(mE);
    for (int e = 0; e < mE; ++e) {
        int i = E(e, 0);
        int j = E(e, 1);
        r(e) = (V.row(j) - V.row(i)).norm();
    }

    // build signed incidence matrix A (sparse)
    signed_incidence_matrix_sparse(n, E, A);

    // build selection matrix C (sparse)
    std::vector<Eigen::Triplet<double>> C_triplets;
    C_triplets.reserve(npin);
    for (int i = 0; i < npin; ++i)
        C_triplets.emplace_back(i, b(i), 1.0);
    C.resize(npin, n);
    C.setFromTriplets(C_triplets.begin(), C_triplets.end());

    // form Q = Q1 + Q2
    // Q1 := k A^T A + (1/dt^2) M
    // Q2 := w C^T C
    Eigen::SparseMatrix<double> Q1 = (A.transpose() * K * A) + inv_dt2 * M;
    Eigen::SparseMatrix<double> Q2 = w * (C.transpose() * C);
    Eigen::SparseMatrix<double> Q = Q1 + Q2;
  
  /////////////////////////////////////////////////////////////////////////////
  prefactorization.compute(Q);
  return prefactorization.info() != Eigen::NumericalIssue;
}
