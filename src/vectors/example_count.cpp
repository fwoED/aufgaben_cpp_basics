#include <catch2/catch_test_macros.hpp>
#include <vector>

namespace inf2_basics {

/// Erwartet einen Vektor und eine Zahl x.
/// Gibt zurück, wie oft x im Vektor vorkommt.
int count(std::vector<int> v, int x) {
  int result = 0;
  for (int i = 0; i < v.size(); i++) {
    if (v[i] == x) {
      result++;
    }
  }
  return result;
}

TEST_CASE("[vectors] example_count", "[vectors][examples]") {
  {  // leerer vector
    std::vector<int> v;
    CHECK(count(v, 0) == 0);
    CHECK(count(v, 1) == 0);
    CHECK(count(v, 42) == 0);
  }
  {  // Element kommt nicht vor
    std::vector<int> v = {1, 2, 3, 4, 5};
    CHECK(count(v, 0) == 0);
  }
  {  // Element kommt einmal vor
    std::vector<int> v = {1, 2, 3, 4, 5};
    CHECK(count(v, 1) == 1);
  }
  {  // Element kommt mehrmals vor
    std::vector<int> v = {1, 2, 3, 4, 5, 1, 2, 3, 4, 5};
    CHECK(count(v, 1) == 2);
  }
}

}  // namespace inf2_basics
