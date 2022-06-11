// this code is generated by gen_matvec_blas.sh
#pragma once
#include "../common/monolish_common.hpp"

namespace monolish {
/**
 * @brief
 * Basic Linear Algebra Subprograms for Dense Matrix, Sparse Matrix, Vector and
 * Scalar
 */
namespace blas {

/**
 * @addtogroup BLASLV2
 * @{
 */

/**
 * \defgroup times monolish::blas::times
 * @brief row-wise element by element multiplication
 * @{
 */
/**
 * @brief Dense matrix and vector times: C[i][j] = A[i][j] * x[j]
 * @param A Dense matrix (size M x N)
 * @param x monolish vector (size M)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void times_row(const matrix::Dense<double> &A, const vector<double> &x,
               matrix::Dense<double> &C);
void times_row(const matrix::Dense<double> &A,
               const view1D<vector<double>, double> &x,
               matrix::Dense<double> &C);
void times_row(const matrix::Dense<double> &A,
               const view1D<matrix::Dense<double>, double> &x,
               matrix::Dense<double> &C);
void times_row(const matrix::Dense<float> &A, const vector<float> &x,
               matrix::Dense<float> &C);
void times_row(const matrix::Dense<float> &A,
               const view1D<vector<float>, float> &x, matrix::Dense<float> &C);
void times_row(const matrix::Dense<float> &A,
               const view1D<matrix::Dense<float>, float> &x,
               matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup times monolish::blas::times
 * @brief row-wise element by element multiplication
 * @{
 */
/**
 * @brief CRS matrix and vector times: C[i][j] = A[i][j] * x[j]
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size M)
 * @param C CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void times_row(const matrix::CRS<double> &A, const vector<double> &x,
               matrix::CRS<double> &C);
void times_row(const matrix::CRS<double> &A,
               const view1D<vector<double>, double> &x, matrix::CRS<double> &C);
void times_row(const matrix::CRS<double> &A,
               const view1D<matrix::CRS<double>, double> &x,
               matrix::CRS<double> &C);
void times_row(const matrix::CRS<float> &A, const vector<float> &x,
               matrix::CRS<float> &C);
void times_row(const matrix::CRS<float> &A,
               const view1D<vector<float>, float> &x, matrix::CRS<float> &C);
void times_row(const matrix::CRS<float> &A,
               const view1D<matrix::CRS<float>, float> &x,
               matrix::CRS<float> &C);
/**@}*/

/**
 * \defgroup times monolish::blas::times
 * @brief column-wise element by element multiplication
 * @{
 */
/**
 * @brief Dense matrix and vector times: C[i][j] = A[i][j] * x[i]
 * @param A Dense matrix (size M x N)
 * @param x monolish vector (size M)
 * @param C Dense matrix (size M x N)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void times_col(const matrix::Dense<double> &A, const vector<double> &x,
               matrix::Dense<double> &C);
void times_col(const matrix::Dense<double> &A,
               const view1D<vector<double>, double> &x,
               matrix::Dense<double> &C);
void times_col(const matrix::Dense<double> &A,
               const view1D<matrix::Dense<double>, double> &x,
               matrix::Dense<double> &C);
void times_col(const matrix::Dense<float> &A, const vector<float> &x,
               matrix::Dense<float> &C);
void times_col(const matrix::Dense<float> &A,
               const view1D<vector<float>, float> &x, matrix::Dense<float> &C);
void times_col(const matrix::Dense<float> &A,
               const view1D<matrix::Dense<float>, float> &x,
               matrix::Dense<float> &C);
/**@}*/

/**
 * \defgroup times monolish::blas::times
 * @brief column-wise element by element multiplication
 * @{
 */
/**
 * @brief CRS matrix and vector times: C[i][j] = A[i][j] * x[j]
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size M)
 * @param C CRS matrix (size M x N)
 * @note
 * - # of computation: nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void times_col(const matrix::CRS<double> &A, const vector<double> &x,
               matrix::CRS<double> &C);
void times_col(const matrix::CRS<double> &A,
               const view1D<vector<double>, double> &x, matrix::CRS<double> &C);
void times_col(const matrix::CRS<double> &A,
               const view1D<matrix::CRS<double>, double> &x,
               matrix::CRS<double> &C);
void times_col(const matrix::CRS<float> &A, const vector<float> &x,
               matrix::CRS<float> &C);
void times_col(const matrix::CRS<float> &A,
               const view1D<vector<float>, float> &x, matrix::CRS<float> &C);
void times_col(const matrix::CRS<float> &A,
               const view1D<matrix::CRS<float>, float> &x,
               matrix::CRS<float> &C);
/**@}*/

/**
 * \defgroup matvec_dense monolish::blas::matvec (Dense)
 * @brief Dense matrix and vector multiplication: y = Ax
 * @{
 */
/**
 * @brief Dense matrix and vector multiplication: y = Ax
 * @param A Dense matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matvec(const matrix::Dense<double> &A, const vector<double> &x,
            vector<double> &y);
void matvec(const matrix::Dense<double> &A, const vector<double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::Dense<double> &A, const vector<double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::Dense<double> &A,
            const view1D<vector<double>, double> &x, vector<double> &y);
void matvec(const matrix::Dense<double> &A,
            const view1D<vector<double>, double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::Dense<double> &A,
            const view1D<vector<double>, double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::Dense<double> &A,
            const view1D<matrix::Dense<double>, double> &x, vector<double> &y);
void matvec(const matrix::Dense<double> &A,
            const view1D<matrix::Dense<double>, double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::Dense<double> &A,
            const view1D<matrix::Dense<double>, double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::Dense<float> &A, const vector<float> &x,
            vector<float> &y);
void matvec(const matrix::Dense<float> &A, const vector<float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::Dense<float> &A, const vector<float> &x,
            view1D<matrix::Dense<float>, float> &y);
void matvec(const matrix::Dense<float> &A,
            const view1D<vector<float>, float> &x, vector<float> &y);
void matvec(const matrix::Dense<float> &A,
            const view1D<vector<float>, float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::Dense<float> &A,
            const view1D<vector<float>, float> &x,
            view1D<matrix::Dense<float>, float> &y);
void matvec(const matrix::Dense<float> &A,
            const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void matvec(const matrix::Dense<float> &A,
            const view1D<matrix::Dense<float>, float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::Dense<float> &A,
            const view1D<matrix::Dense<float>, float> &x,
            view1D<matrix::Dense<float>, float> &y);
/**@}*/

/**
 * \defgroup matvec_dense_N monolish::blas::matvec_N (Dense)
 * @brief Dense matrix and vector multiplication: y = A^N x
 * @{
 */
/**
 * @brief Dense matrix and vector multiplication: y = A^N x
 * @param A Dense matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matvec_N(const matrix::Dense<double> &A, const vector<double> &x,
              vector<double> &y);
void matvec_N(const matrix::Dense<double> &A, const vector<double> &x,
              view1D<vector<double>, double> &y);
void matvec_N(const matrix::Dense<double> &A, const vector<double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_N(const matrix::Dense<double> &A,
              const view1D<vector<double>, double> &x, vector<double> &y);
void matvec_N(const matrix::Dense<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_N(const matrix::Dense<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_N(const matrix::Dense<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              vector<double> &y);
void matvec_N(const matrix::Dense<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_N(const matrix::Dense<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_N(const matrix::Dense<float> &A, const vector<float> &x,
              vector<float> &y);
void matvec_N(const matrix::Dense<float> &A, const vector<float> &x,
              view1D<vector<float>, float> &y);
void matvec_N(const matrix::Dense<float> &A, const vector<float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_N(const matrix::Dense<float> &A,
              const view1D<vector<float>, float> &x, vector<float> &y);
void matvec_N(const matrix::Dense<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_N(const matrix::Dense<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_N(const matrix::Dense<float> &A,
              const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void matvec_N(const matrix::Dense<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_N(const matrix::Dense<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
/**@}*/

/**
 * \defgroup matvec_dense_T monolish::blas::matvec_T (Dense)
 * @brief Dense matrix and vector multiplication: y = A^T x
 * @{
 */
/**
 * @brief Dense matrix and vector multiplication: y = A^T x
 * @param A Dense matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: MN
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matvec_T(const matrix::Dense<double> &A, const vector<double> &x,
              vector<double> &y);
void matvec_T(const matrix::Dense<double> &A, const vector<double> &x,
              view1D<vector<double>, double> &y);
void matvec_T(const matrix::Dense<double> &A, const vector<double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_T(const matrix::Dense<double> &A,
              const view1D<vector<double>, double> &x, vector<double> &y);
void matvec_T(const matrix::Dense<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_T(const matrix::Dense<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_T(const matrix::Dense<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              vector<double> &y);
void matvec_T(const matrix::Dense<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_T(const matrix::Dense<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_T(const matrix::Dense<float> &A, const vector<float> &x,
              vector<float> &y);
void matvec_T(const matrix::Dense<float> &A, const vector<float> &x,
              view1D<vector<float>, float> &y);
void matvec_T(const matrix::Dense<float> &A, const vector<float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_T(const matrix::Dense<float> &A,
              const view1D<vector<float>, float> &x, vector<float> &y);
void matvec_T(const matrix::Dense<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_T(const matrix::Dense<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_T(const matrix::Dense<float> &A,
              const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void matvec_T(const matrix::Dense<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_T(const matrix::Dense<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
/**@}*/

/**
 * \defgroup matvec_crs monolish::blas::matvec (CRS)
 * @brief CRS format sparse matrix and vector multiplication: y = Ax
 * @{
 */
/**
 * @brief CRS format sparse matrix and vector multiplication: y = Ax
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: 2nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matvec(const matrix::CRS<double> &A, const vector<double> &x,
            vector<double> &y);
void matvec(const matrix::CRS<double> &A, const vector<double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::CRS<double> &A, const vector<double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::CRS<double> &A,
            const view1D<vector<double>, double> &x, vector<double> &y);
void matvec(const matrix::CRS<double> &A,
            const view1D<vector<double>, double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::CRS<double> &A,
            const view1D<vector<double>, double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::CRS<double> &A,
            const view1D<matrix::Dense<double>, double> &x, vector<double> &y);
void matvec(const matrix::CRS<double> &A,
            const view1D<matrix::Dense<double>, double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::CRS<double> &A,
            const view1D<matrix::Dense<double>, double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::CRS<float> &A, const vector<float> &x,
            vector<float> &y);
void matvec(const matrix::CRS<float> &A, const vector<float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::CRS<float> &A, const vector<float> &x,
            view1D<matrix::Dense<float>, float> &y);
void matvec(const matrix::CRS<float> &A, const view1D<vector<float>, float> &x,
            vector<float> &y);
void matvec(const matrix::CRS<float> &A, const view1D<vector<float>, float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::CRS<float> &A, const view1D<vector<float>, float> &x,
            view1D<matrix::Dense<float>, float> &y);
void matvec(const matrix::CRS<float> &A,
            const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void matvec(const matrix::CRS<float> &A,
            const view1D<matrix::Dense<float>, float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::CRS<float> &A,
            const view1D<matrix::Dense<float>, float> &x,
            view1D<matrix::Dense<float>, float> &y);
/**@}*/

/**
 * \defgroup matvec_crs_N monolish::blas::matvec_N (CRS)
 * @brief CRS format sparse matrix and vector multiplication: y = A^N x
 * @{
 */
/**
 * @brief CRS format sparse matrix and vector multiplication: y = A^N x
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: 2nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matvec_N(const matrix::CRS<double> &A, const vector<double> &x,
              vector<double> &y);
void matvec_N(const matrix::CRS<double> &A, const vector<double> &x,
              view1D<vector<double>, double> &y);
void matvec_N(const matrix::CRS<double> &A, const vector<double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_N(const matrix::CRS<double> &A,
              const view1D<vector<double>, double> &x, vector<double> &y);
void matvec_N(const matrix::CRS<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_N(const matrix::CRS<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_N(const matrix::CRS<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              vector<double> &y);
void matvec_N(const matrix::CRS<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_N(const matrix::CRS<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_N(const matrix::CRS<float> &A, const vector<float> &x,
              vector<float> &y);
void matvec_N(const matrix::CRS<float> &A, const vector<float> &x,
              view1D<vector<float>, float> &y);
void matvec_N(const matrix::CRS<float> &A, const vector<float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_N(const matrix::CRS<float> &A,
              const view1D<vector<float>, float> &x, vector<float> &y);
void matvec_N(const matrix::CRS<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_N(const matrix::CRS<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_N(const matrix::CRS<float> &A,
              const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void matvec_N(const matrix::CRS<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_N(const matrix::CRS<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
/**@}*/

/**
 * \defgroup matvec_crs_T monolish::blas::matvec_T (CRS)
 * @brief CRS format sparse matrix and vector multiplication: y = A^T x
 * @{
 */
/**
 * @brief CRS format sparse matrix and vector multiplication: y = A^T x
 * @param A CRS matrix (size M x N)
 * @param x monolish vector (size M)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: 2nnz
 * - Multi-threading: true
 * - GPU acceleration: true
 *    - # of data transfer: 0
 */
void matvec_T(const matrix::CRS<double> &A, const vector<double> &x,
              vector<double> &y);
void matvec_T(const matrix::CRS<double> &A, const vector<double> &x,
              view1D<vector<double>, double> &y);
void matvec_T(const matrix::CRS<double> &A, const vector<double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_T(const matrix::CRS<double> &A,
              const view1D<vector<double>, double> &x, vector<double> &y);
void matvec_T(const matrix::CRS<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_T(const matrix::CRS<double> &A,
              const view1D<vector<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_T(const matrix::CRS<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              vector<double> &y);
void matvec_T(const matrix::CRS<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<vector<double>, double> &y);
void matvec_T(const matrix::CRS<double> &A,
              const view1D<matrix::Dense<double>, double> &x,
              view1D<matrix::Dense<double>, double> &y);
void matvec_T(const matrix::CRS<float> &A, const vector<float> &x,
              vector<float> &y);
void matvec_T(const matrix::CRS<float> &A, const vector<float> &x,
              view1D<vector<float>, float> &y);
void matvec_T(const matrix::CRS<float> &A, const vector<float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_T(const matrix::CRS<float> &A,
              const view1D<vector<float>, float> &x, vector<float> &y);
void matvec_T(const matrix::CRS<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_T(const matrix::CRS<float> &A,
              const view1D<vector<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
void matvec_T(const matrix::CRS<float> &A,
              const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void matvec_T(const matrix::CRS<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<vector<float>, float> &y);
void matvec_T(const matrix::CRS<float> &A,
              const view1D<matrix::Dense<float>, float> &x,
              view1D<matrix::Dense<float>, float> &y);
/**@}*/

/**
 * \defgroup matvec_LO monolish::blas::matvec (LinearOperator)
 * @brief LinearOperator matrix and vector multiplication: y = Ax
 * @{
 */
/**
 * @brief matrix (LinearOperator) and vector multiplication: y = Ax
 * @param A LinearOperator (size M x N)
 * @param x monolish vector (size N)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: depends on matvec function
 * - Multi-threading: depends on matvec function
 * - GPU acceleration: depends on matvec function
 */
void matvec(const matrix::LinearOperator<double> &A, const vector<double> &x,
            vector<double> &y);
void matvec(const matrix::LinearOperator<double> &A, const vector<double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::LinearOperator<double> &A, const vector<double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::LinearOperator<double> &A,
            const view1D<vector<double>, double> &x, vector<double> &y);
void matvec(const matrix::LinearOperator<double> &A,
            const view1D<vector<double>, double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::LinearOperator<double> &A,
            const view1D<vector<double>, double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::LinearOperator<double> &A,
            const view1D<matrix::Dense<double>, double> &x, vector<double> &y);
void matvec(const matrix::LinearOperator<double> &A,
            const view1D<matrix::Dense<double>, double> &x,
            view1D<vector<double>, double> &y);
void matvec(const matrix::LinearOperator<double> &A,
            const view1D<matrix::Dense<double>, double> &x,
            view1D<matrix::Dense<double>, double> &y);
void matvec(const matrix::LinearOperator<float> &A, const vector<float> &x,
            vector<float> &y);
void matvec(const matrix::LinearOperator<float> &A, const vector<float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::LinearOperator<float> &A, const vector<float> &x,
            view1D<matrix::Dense<float>, float> &y);
void matvec(const matrix::LinearOperator<float> &A,
            const view1D<vector<float>, float> &x, vector<float> &y);
void matvec(const matrix::LinearOperator<float> &A,
            const view1D<vector<float>, float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::LinearOperator<float> &A,
            const view1D<vector<float>, float> &x,
            view1D<matrix::Dense<float>, float> &y);
void matvec(const matrix::LinearOperator<float> &A,
            const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void matvec(const matrix::LinearOperator<float> &A,
            const view1D<matrix::Dense<float>, float> &x,
            view1D<vector<float>, float> &y);
void matvec(const matrix::LinearOperator<float> &A,
            const view1D<matrix::Dense<float>, float> &x,
            view1D<matrix::Dense<float>, float> &y);
/**@}*/

/**
 * \defgroup rmatvec_LO monolish::blas::rmatvec (LinearOperator)
 * @brief Adjoint LinearOperator matrix and vector multiplication: y = A^Hx
 * @{
 */
/**
 * @brief Adjoint LinearOperator matrix and vector multiplication: y = A^Hx
 * @param A LinearOperator (size M x N)
 * @param x monolish vector (size N)
 * @param y monolish vector (size M)
 * @note
 * - # of computation: depends on matvec function
 * - Multi-threading: depends on matvec function
 * - GPU acceleration: depends on matvec function
 */
void rmatvec(const matrix::LinearOperator<double> &A, const vector<double> &x,
             vector<double> &y);
void rmatvec(const matrix::LinearOperator<double> &A, const vector<double> &x,
             view1D<vector<double>, double> &y);
void rmatvec(const matrix::LinearOperator<double> &A, const vector<double> &x,
             view1D<matrix::Dense<double>, double> &y);
void rmatvec(const matrix::LinearOperator<double> &A,
             const view1D<vector<double>, double> &x, vector<double> &y);
void rmatvec(const matrix::LinearOperator<double> &A,
             const view1D<vector<double>, double> &x,
             view1D<vector<double>, double> &y);
void rmatvec(const matrix::LinearOperator<double> &A,
             const view1D<vector<double>, double> &x,
             view1D<matrix::Dense<double>, double> &y);
void rmatvec(const matrix::LinearOperator<double> &A,
             const view1D<matrix::Dense<double>, double> &x, vector<double> &y);
void rmatvec(const matrix::LinearOperator<double> &A,
             const view1D<matrix::Dense<double>, double> &x,
             view1D<vector<double>, double> &y);
void rmatvec(const matrix::LinearOperator<double> &A,
             const view1D<matrix::Dense<double>, double> &x,
             view1D<matrix::Dense<double>, double> &y);
void rmatvec(const matrix::LinearOperator<float> &A, const vector<float> &x,
             vector<float> &y);
void rmatvec(const matrix::LinearOperator<float> &A, const vector<float> &x,
             view1D<vector<float>, float> &y);
void rmatvec(const matrix::LinearOperator<float> &A, const vector<float> &x,
             view1D<matrix::Dense<float>, float> &y);
void rmatvec(const matrix::LinearOperator<float> &A,
             const view1D<vector<float>, float> &x, vector<float> &y);
void rmatvec(const matrix::LinearOperator<float> &A,
             const view1D<vector<float>, float> &x,
             view1D<vector<float>, float> &y);
void rmatvec(const matrix::LinearOperator<float> &A,
             const view1D<vector<float>, float> &x,
             view1D<matrix::Dense<float>, float> &y);
void rmatvec(const matrix::LinearOperator<float> &A,
             const view1D<matrix::Dense<float>, float> &x, vector<float> &y);
void rmatvec(const matrix::LinearOperator<float> &A,
             const view1D<matrix::Dense<float>, float> &x,
             view1D<vector<float>, float> &y);
void rmatvec(const matrix::LinearOperator<float> &A,
             const view1D<matrix::Dense<float>, float> &x,
             view1D<matrix::Dense<float>, float> &y);
/**@}*/
/**@}*/
} // namespace blas
} // namespace monolish
