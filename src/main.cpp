#include <vector>
#include <iostream>
#include <cstring>
#include "common_elements_test.hpp"
#include "common_elements.hpp"

void print_common_elements_number() {
  size_t a_size;
  size_t b_size;
  std::cin >> a_size >> b_size;

  std::vector<int> a(a_size);
  std::vector<int> b(b_size);

  for (size_t i = 0; i < a_size; ++i) {
    std::cin >> a[i];
  }

  for (size_t i = 0; i < b_size; ++i) {
    std::cin >> b[i];
  }

  std::cout << common_elements(a, b) << " common elements.";
}

bool is_test_arg(int argc, char *argv[]) {
  return argc == 2 && (strncmp(argv[1], "--test", 6) == 0 || strncmp(argv[1], "-t", 2) == 0);
}

void print_message() {
  std::cout << "Input format: [A size]\n [B size]\n [A elements]\n [B elements]" << std::endl;
}

int main(int argc, char *argv[]) {
  if (is_test_arg(argc, argv)) {
    common_elements_test::run_tests();
  } else {
    print_message();
    print_common_elements_number();
  }

  return 0;
}
