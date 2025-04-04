#include <algorithm>
#include <catch2/catch_test_macros.hpp>
#include <vector>

namespace inf2_basics {

/// Erwartet zwei Listen "keys" und "values" sowie eine Zahl n.
/// Sucht nach der Zahl n in der Liste "keys" und gibt den entsprechenden
/// Wert aus der Liste "values" zurück.
/// Wenn n nicht in der Liste "keys" vorkommt, wird -1 zurückgegeben.
/// Wenn die ermittelte Position von n in "values" nicht existiert,
/// wird ebenfalls -1 zurückgegeben.
int map_key(std::vector<int> keys, std::vector<int> values, int n) {
  // TODO
  return -1;
}

TEST_CASE("[vectors] task_map_key", "[vectors][tasks]") {
  {  // key und value vorhanden
    std::vector<int> keys{1, 2, 3};
    std::vector<int> values{4, 5, 6};
    CHECK(map_key(keys, values, 1) == 4);
    CHECK(map_key(keys, values, 2) == 5);
    CHECK(map_key(keys, values, 3) == 6);
  }
  {  // key vorhanden, value nicht
    std::vector<int> keys{1, 2, 3};
    std::vector<int> values{4};
    CHECK(map_key(keys, values, 1) == 4);
    CHECK(map_key(keys, values, 2) == -1);
    CHECK(map_key(keys, values, 3) == -1);
  }
  {  // key nicht vorhanden
    std::vector<int> keys{1, 2, 3};
    std::vector<int> values{4, 5};
    CHECK(map_key(keys, values, -1) == -1);
    CHECK(map_key(keys, values, -2) == -1);
    CHECK(map_key(keys, values, -3) == -1);
  }
}

}  // namespace inf2_basics
