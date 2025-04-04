#include <catch2/catch_test_macros.hpp>
#include <vector>

namespace inf2_basics {

/// Erwartet zwei Zahlen n und count.
/// Liefert eine Liste, in der n count-mal wiederholt wird.
std::vector<int> repeat(int n, int count) {
  std::vector<int> result;
  // TODO
  return result;
}

TEST_CASE("[loops] repeat", "[loops][tasks]") {
  CHECK(repeat(2, 1) == std::vector<int>{2});
  CHECK(repeat(2, 10) == std::vector<int>{2, 2, 2, 2, 2, 2, 2, 2, 2, 2});
  CHECK(repeat(2, 0) == std::vector<int>{});
}

}  // namespace inf2_basics
