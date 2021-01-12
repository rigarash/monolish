#include "../../../include/common/monolish_dense.hpp"
#include "../../../include/common/monolish_logger.hpp"
#include "../../../include/common/monolish_matrix.hpp"
#include "../../../include/monolish_vml.hpp"
#include "../../internal/monolish_internal.hpp"

namespace monolish {

template <typename T> void vector<T>::operator=(const std::vector<T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

  resize(vec.size());
  std::copy(vec.begin(), vec.end(), val.begin());

  logger.util_out();
}

template void vector<double>::operator=(const std::vector<double> &vec);
template void vector<float>::operator=(const std::vector<float> &vec);


template <typename T> void vector<T>::operator=(const vector<T> &vec) {
  Logger &logger = Logger::get_instance();
  logger.util_in(monolish_func);

  if (size() != vec.size()) {
    throw std::runtime_error("error vector size is not same");
  }
  if (get_device_mem_stat() != vec.get_device_mem_stat()) {
    throw std::runtime_error("error vector get_device_mem_stat() is not same");
  }

  // gpu copy and recv
  if (vec.get_device_mem_stat()) {
#if MONOLISH_USE_GPU
    internal::vcopy(vec.val.size(), vec.val.data(), val.data(), true);
#endif
  } else {
    internal::vcopy(vec.val.size(), vec.val.data(), val.data(), false);
  }

  logger.util_out();
}

template void vector<double>::operator=(const vector<double> &vec);
template void vector<float>::operator=(const vector<float> &vec);

}
