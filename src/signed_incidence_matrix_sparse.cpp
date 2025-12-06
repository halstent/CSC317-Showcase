#include "signed_incidence_matrix_sparse.h"
#include <vector>

void signed_incidence_matrix_sparse(
  const int n,
  const Eigen::MatrixXi & E,
  Eigen::SparseMatrix<double>  & A)
{
  //////////////////////////////////////////////////////////////////////////////
  
    const int m = E.rows(); // number of edges

    // prepare triplet list
    std::vector<Eigen::Triplet<double>> triplets;
    triplets.reserve(2 * m); // each edge contributes two nonzeros

    for (int e = 0; e < m; ++e) {
        const int i = E(e, 0); // first vertex of edge e
        const int j = E(e, 1); // second vertex of edge e

        triplets.emplace_back(e, i, -1.0); // first vertex
        triplets.emplace_back(e, j, +1.0); // second vertex
    }

    // construct sparse matrix from triplets
    A.resize(m, n);
    A.setFromTriplets(triplets.begin(), triplets.end());

  //////////////////////////////////////////////////////////////////////////////
}
