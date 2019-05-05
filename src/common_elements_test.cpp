#include <vector>
#include <iostream>
#include "common_elements.hpp"
#include "assert.hpp"

namespace common_elements_test {

  void test_both_empty() {
    std::vector<int> a;
    std::vector<int> b;

    test::assert_equal(0, common_elements(a, b));
  }

  void test_one_empty() {
    std::vector<int> a;
    std::vector<int> b = {1, 2, 3, 4, 5};

    test::assert_equal(0, common_elements(a, b));
    test::assert_equal(0, common_elements(b, a));
  }

  void test_equal() {
    std::vector<int> a = {1, 2, 3, 4, 5};
    std::vector<int> b = {5, 4, 3, 2, 1};

    test::assert_equal(5, common_elements(a, b));
    test::assert_equal(5, common_elements(b, a));
  }

  void test_simple_ordered() {
    std::vector<int> a = {1, 2, 3, 4, 5, 87, 94};
    std::vector<int> b = {1, 3, 5, 11, 15, 42};

    test::assert_equal(3, common_elements(a, b));
    test::assert_equal(3, common_elements(b, a));
  }

  void test_simple_unordered() {
    std::vector<int> a = {4, 3, 87, 1, 5, 94, 2};
    std::vector<int> b = {15, 3, 1, 42, 11, 5};

    test::assert_equal(3, common_elements(a, b));
    test::assert_equal(3, common_elements(b, a));
  }

  void run_tests() {
    test_both_empty();
    test_one_empty();
    test_equal();
    test_simple_ordered();
    test_simple_unordered();

    std::cout << "All tests passed.";
  }
}
