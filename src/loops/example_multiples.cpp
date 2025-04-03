#include <catch2/catch_test_macros.hpp>
#include <vector>

namespace inf2_basics {

/// Erwartet zwei Zahlen n und limit.
/// Liefert eine Liste mit allen Vielfachen von n, die kleiner als limit sind.
std::vector<int> even_below(int n, int limit) {
  std::vector<int> result;
  for (int i = 1; n * i < limit; i++) {
    result.push_back(n * i);
  }
  return result;
}

TEST_CASE("[loops] multiples", "[loops][examples]") {
  CHECK(even_below(1, 10) == std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9});
  CHECK(even_below(2, 10) == std::vector<int>{2, 4, 6, 8});

  CHECK(even_below(3, 10) == std::vector<int>{3, 6, 9});

  CHECK(even_below(13, 450) ==
        std::vector<int>{13,  26,  39,  52,  65,  78,  91,  104, 117,
                         130, 143, 156, 169, 182, 195, 208, 221, 234,
                         247, 260, 273, 286, 299, 312, 325, 338, 351,
                         364, 377, 390, 403, 416, 429, 442});
}

}  // namespace inf2_basics
