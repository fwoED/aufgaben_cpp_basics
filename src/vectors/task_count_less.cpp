#include <catch2/catch_test_macros.hpp>
#include <vector>

namespace inf2_basics {

/// Erwartet einen Vektor und eine Zahl x.
/// Gibt zurück, wie viele Zahlen im Vektor vorkommen, die kleiner als x sind.
int count_less(std::vector<int> v, int x) {
  int result = 0;
  for(int i = 0; i < v.size();i++){
    if (v[i]<x){
      result++;
    }
  }
  return result;
}

TEST_CASE("[vectors] example_count_less", "[vectors][tasks]") {
  {  // leerer vector
    std::vector<int> v;
    CHECK(count_less(v, 0) == 0);
    CHECK(count_less(v, 1) == 0);
    CHECK(count_less(v, 42) == 0);
  }
  {  // nicht-leerer vector
    std::vector<int> v = {2, 1, 4, 5, 3};
    CHECK(count_less(v, 1) == 0);
    CHECK(count_less(v, 2) == 1);
    CHECK(count_less(v, 3) == 2);
    CHECK(count_less(v, 4) == 3);
    CHECK(count_less(v, 5) == 4);
  }
}

}  // namespace inf2_basics
