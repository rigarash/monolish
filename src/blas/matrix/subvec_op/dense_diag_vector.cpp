#include "../../../../include/monolish_blas.hpp"
#include "../../../monolish_internal.hpp"

namespace monolish {
namespace matrix {

// add vector
template <typename T> void Dense<T>::diag_add(const vector<T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  const T *vecd = vec.data();

  T *vald = val.data();
  const size_t N = get_col();
  const size_t Len = get_row() > get_col() ? get_row() : get_col();

  if (Len != vec.size()) {
    throw std::runtime_error("error vec.size != A.diag.size");
  }

#if MONOLISH_USE_GPU // gpu
  size_t nnz = get_nnz();

#pragma omp target teams distribute parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] += vecd[i];
  }

#else // cpu

#pragma omp parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] += vecd[i];
  }

#endif

  logger.func_out();
}
template void
monolish::matrix::Dense<double>::diag_add(const vector<double> &vec);
template void
monolish::matrix::Dense<float>::diag_add(const vector<float> &vec);

// sub vector
template <typename T> void Dense<T>::diag_sub(const vector<T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  const T *vecd = vec.data();

  T *vald = val.data();
  const size_t N = get_col();
  const size_t Len = get_row() > get_col() ? get_row() : get_col();

  if (Len != vec.size()) {
    throw std::runtime_error("error vec.size != A.diag.size");
  }

#if MONOLISH_USE_GPU // gpu
  size_t nnz = get_nnz();

#pragma omp target teams distribute parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] -= vecd[i];
  }

#else // cpu

#pragma omp parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] -= vecd[i];
  }

#endif

  logger.func_out();
}
template void
monolish::matrix::Dense<double>::diag_sub(const vector<double> &vec);
template void
monolish::matrix::Dense<float>::diag_sub(const vector<float> &vec);

// mul vector
template <typename T> void Dense<T>::diag_mul(const vector<T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  const T *vecd = vec.data();

  T *vald = val.data();
  const size_t N = get_col();
  const size_t Len = get_row() > get_col() ? get_row() : get_col();

  if (Len != vec.size()) {
    throw std::runtime_error("error vec.size != A.diag.size");
  }

#if MONOLISH_USE_GPU // gpu
  size_t nnz = get_nnz();

#pragma omp target teams distribute parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] *= vecd[i];
  }

#else // cpu

#pragma omp parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] *= vecd[i];
  }

#endif

  logger.func_out();
}
template void
monolish::matrix::Dense<double>::diag_mul(const vector<double> &vec);
template void
monolish::matrix::Dense<float>::diag_mul(const vector<float> &vec);

// div vector
template <typename T> void Dense<T>::diag_div(const vector<T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  const T *vecd = vec.data();

  T *vald = val.data();
  const size_t N = get_col();
  const size_t Len = get_row() > get_col() ? get_row() : get_col();

  if (Len != vec.size()) {
    throw std::runtime_error("error vec.size != A.diag.size");
  }

#if MONOLISH_USE_GPU // gpu
  size_t nnz = get_nnz();

#pragma omp target teams distribute parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] /= vecd[i];
  }

#else // cpu

#pragma omp parallel for
  for (size_t i = 0; i < Len; i++) {
    vald[N * i + i] /= vecd[i];
  }

#endif

  logger.func_out();
}
template void
monolish::matrix::Dense<double>::diag_div(const vector<double> &vec);
template void
monolish::matrix::Dense<float>::diag_div(const vector<float> &vec);

} // namespace matrix
} // namespace monolish
