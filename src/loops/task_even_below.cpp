#include <catch2/catch_test_macros.hpp>
#include <vector>

namespace inf2_basics {

/// Erwartet eine Zahl limit.
/// Liefert eine Liste mit allen geraden Zahlen, die kleiner als n sind.
std::vector<int> even_below(int limit) {
  std::vector<int> result;
  // TODO
  return result;
}

TEST_CASE("[loops] even_below", "[loops][tasks]") {
  CHECK(even_below(10) == std::vector<int>{0, 2, 4, 6, 8});
  CHECK(even_below(11) == std::vector<int>{0, 2, 4, 6, 8, 10});
  CHECK(even_below(100) ==
        std::vector<int>{0,  2,  4,  6,  8,  10, 12, 14, 16, 18, 20, 22, 24,
                         26, 28, 30, 32, 34, 36, 38, 40, 42, 44, 46, 48, 50,
                         52, 54, 56, 58, 60, 62, 64, 66, 68, 70, 72, 74, 76,
                         78, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98});
}

}  // namespace inf2_basics
