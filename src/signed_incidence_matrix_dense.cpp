#include "signed_incidence_matrix_dense.h"

void signed_incidence_matrix_dense(
  const int n,
  const Eigen::MatrixXi & E,
  Eigen::MatrixXd & A)
{
  //////////////////////////////////////////////////////////////////////////////
  
	// set number of edges for matrix size and looping
    const int m = E.rows();

    // resize A to (#E × n) and initialize to zero
    A.setZero(m, n);

    for (int e = 0; e < m; ++e) {
		const int i = E(e, 0); // first vertex of e
		const int j = E(e, 1); // second vertex of e

		A(e, i) = -1.0;
		A(e, j) = +1.0;
    }

  //////////////////////////////////////////////////////////////////////////////
}
