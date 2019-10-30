#include<iostream>
#include<typeinfo>
#include<exception>
#include<stdexcept>

#include<chrono>

#include<stdio.h>
#include<stdlib.h>
#include<omp.h>

#include<cblas.h>
#include "../../../include/monolish_blas.hpp"

#define BENCHMARK
namespace monolish{



	double blas::dot(monolish::vector<double> &x, monolish::vector<double> &y){
		Logger& logger = Logger::get_instance();
		logger.func_in(func);

		if( x.size() != y.size()){
			throw std::runtime_error("error vector size is not same");

		}
		

#if USE_GPU
#else
		double ans = cblas_ddot(x.size(), x.data(), 1, y.data(), 1);
#endif




		logger.func_out();
		return 1;
	}

}

// namespace monolish_blas{
// 	double mpi_all_reduce(double a, char* comm){
//
// 		MPI_Allreduce((void *)&a, (void *)&a, 1, MPI_DOUBLE, comm);
//
// 		return a;
// 	}
//
// //////////////////////////////
// 	double x86_dot(double* x, double* y, double ans)
// 		double ans;
// 		std::cout << "x86 float dot" << std::endl;
// 		ddot(N,x,1,y,1, ans)
// 		ans = mpi_all_reduce(ans);
// 	}
//
// //////////////////////////////
// 	double gpu_dot(double* x, double* y, double ans)
// 	{
// #pragma acc update device (x[0:N], y[0:1])
// 		cublasInit();
// 		cublasDdot(N, x, 1, y, 1, ans);
// 		cublasShutdown()
// #pragma acc update host (ans)
// 		ans = mpi_all_reduce(ans);
// 		return ans
// 	}
//
// //////////////////////////////
// //////////////////////////////
// 	double other_dot(double* x, double* y, double ans){
// 		std::cout << "gomachan piyo" << std::endl;
// 		return -1;
// 	}
//
// //////////////////////////////
// //////////////////////////////
// 	double dot(std::vector<double> x, std::vector<double> y, double ans, solver sol){
// #ifdef BENCHMARK
// 		double sec = 0;
// 		std::chrono::system_clock::time_point start = std::chrono::system_clock::now();
// #endif
//
// #ifdef USE_CPU
// 		ans = x86_dot(x.data(), y.data(), x.N, sol);
// #elif USE_GPU
// 		ans = gpu_dot(x.data(), y.data, x.N, sol);
// #else
// 		ans = other_dot(x.data(), y.data, x.N, sol);
// #endif
//
// #ifdef BENCHMARK
// 		std::chrono::system_clock::time_point end = std::chrono::system_clock::now();
// 		sec += std::chrono::duration_cast<std::chrono::nanoseconds>(end-start).count()/1.0e+9;
// 		std::cout << "time = " << sec << std::endl;
// #endif
// 	}
//
// }
//
// int main(){
//
// 	std::vector<double> x(100, 1.0);
// 	std::vector<double> y(100, 1.0);
// 	double ans = 0.0;
//
// 	double ans = monolish_blas::dot(x, y, ans);//0.4
//
// 	std::cout << "a = " << ans << std::endl;
// }
