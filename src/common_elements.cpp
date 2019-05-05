#include <iostream>
#include <unordered_set>
#include "common_elements.hpp"


/**
 * Calculate number of common elements in given vectors.
 *
 * @param a one vector
 * @param b another vector
 * @return number of common elements
 *
 * Asymtotic analysis: O(a.size() + b.size())
 *   *in average case - due to unordered set hash table implementation.
 *
 * For better performance a.size() should be <= b.size() (less hash table queries).
 */
size_t common_elements_implementation(std::vector<int> const &a, std::vector<int> const &b) {
  auto a_set = std::unordered_set<int>(a.begin(), a.end());

  size_t common_elements = 0;

  for (int elem : b) {
    if (a_set.find(elem) != a_set.end()) {
      ++common_elements;
    }
  }

  return common_elements;
}

size_t common_elements(std::vector<int> const &a, std::vector<int> const &b) {
  if (a.size() > b.size()) {
    return common_elements_implementation(b, a);
  } else {
    return common_elements_implementation(a, b);
  }
}
