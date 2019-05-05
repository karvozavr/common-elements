#pragma once

#include <iostream>

namespace test {

  /**
   * Simplest assertion with output.
   *
   * @tparam T type of expected
   * @tparam U type of actual
   * @param expected expected value
   * @param actual actual value
   */
  template<typename T, typename U>
  void assert_equal(T const &expected, U const &actual) {
    if (expected != actual) {
      std::cerr << "Expected: " << expected << ", actual: " << actual << std::endl;
      exit(1);
    }
  }
}