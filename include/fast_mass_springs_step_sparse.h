#ifndef FAST_MASS_SPRINGS_STEP_SPARSE_H
#define FAST_MASS_SPRINGS_STEP_SPARSE_H
#include <Eigen/Core>
#include <Eigen/Sparse>
#include "driver.h"

extern std::vector<Driver> drivers;

// Same as fast_mass_springs_step_dense but with sparse matrices.
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
  Eigen::MatrixXd & Unext);
#endif 
