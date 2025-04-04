#include <catch2/catch_test_macros.hpp>
#include <vector>

namespace inf2_basics {

/// Erwartet einen Vektor und einen String s.
/// Liefert die Position von s im Vektor zurück, falls s im Vektor vorkommt.
/// Liefet die Länge des Vektors zurück, falls s nicht vorkommt.
/// Bei mehrfachem Vorkommen wird die Position des ersten Vorkommens
/// zurückgegeben.
size_t find_string(std::vector<std::string> v, std::string s) {
  int result = 0;
  // TODO
  return v.size();
}

TEST_CASE("[vectors] task_find_string", "[vectors][tasks]") {
  {  // leerer vector
    std::vector<std::string> v;
    CHECK(find_string(v, "a") == 0);
    CHECK(find_string(v, "b") == 0);
    CHECK(find_string(v, "c") == 0);
  }
  {  // kein Vorkommen
    std::vector<std::string> v{"a", "b", "c", "d", "e"};
    CHECK(find_string(v, "x") == 5);
  }
  {  // ein Vorkommen
    std::vector<std::string> v{"a", "b", "c", "d", "e"};
    CHECK(find_string(v, "a") == 0);
  }
  {  // mehrere Vorkommen
    std::vector<std::string> v{"a", "b", "c", "d", "e",
                               "a", "b", "c", "d", "e"};
    CHECK(find_string(v, "b") == 1);
  }
}

}  // namespace inf2_basics
