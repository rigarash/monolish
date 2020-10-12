#include "../../../include/monolish_blas.hpp"
#include "../../monolish_internal.hpp"

#ifdef MONOLISH_USE_GPU
#include <cublas_v2.h>
#else
#include <cblas.h>
#endif

namespace monolish {

// double ///////////////////
double blas::asum(const vector<double> &x) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  double ans = 0;
  const double *xd = x.data();
  size_t size = x.size();

#if MONOLISH_USE_GPU
  cublasHandle_t h;
  check(cublasCreate(&h));
#pragma omp target data use_device_ptr(xd)
  { check(cublasDasum(h, size, xd, 1, &ans)); }
  cublasDestroy(h);
#else
  ans = cblas_dasum(size, xd, 1);
#endif
  logger.func_out();
  return ans;
}

// float ///////////////////
float blas::asum(const vector<float> &x) {
  Logger &logger = Logger::get_instance();
  logger.func_in(monolish_func);

  float ans = 0;
  const float *xd = x.data();
  size_t size = x.size();

#if MONOLISH_USE_GPU
  cublasHandle_t h;
  check(cublasCreate(&h));
#pragma omp target data use_device_ptr(xd)
  { check(cublasSasum(h, size, xd, 1, &ans)); }
  cublasDestroy(h);
#else
  ans = cblas_sasum(size, xd, 1);
#endif
  logger.func_out();
  return ans;
}

// void ///////////////////
void blas::asum(const vector<double> &x, double &ans) { ans = asum(x); }
void blas::asum(const vector<float> &x, float &ans) { ans = asum(x); }

} // namespace monolish
