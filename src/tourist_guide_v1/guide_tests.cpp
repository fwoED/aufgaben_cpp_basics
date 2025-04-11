c#include <catch2/catch_test_macros.hpp>

#include "guide.h"
using namespace guide;
using namespace std;

TEST_CASE("[tourist_guide] get_place_info", "[tourist_guide][tests]") {
  {
    vector<string> places{"Eiffelturm", "Opera House", "DHBW"};
    vector<string> descriptions{"monstroeser Stahlbau", "Laermquelle",
                                "Quelle der Erkenntnis"};
<<<<<<< HEAD
    vector<int> entry_fees{42, 23, 0}
         CHECK(get_place_info(places, descriptions, entry_fees, "Eiffelturm") ==
               make_pair("monstroeser Stahlbau", 42));
   CHECK(get_place_info(places, descriptions, entry_fees, "Opera House") ==
           make_pair("Laermquelle", 23));
     CHECK(get_place_info(places, descriptions, entry_fees, "DHBW") ==
           make_pair("Quelle der Erkenntnis", 0));
     CHECK(get_place_info(places, descriptions, entry_fees, "Uni Mannheim") ==
           make_pair("", -1));
=======
    vector<int> entry_fees{42, 23, 0};

    CHECK(get_place_info(places, descriptions, entry_fees, "Eiffelturm") ==
          make_pair<string, int>("monstroeser Stahlbau", 42));
    CHECK(get_place_info(places, descriptions, entry_fees, "Opera House") ==
          make_pair<string, int>("Laermquelle", 23));
    CHECK(get_place_info(places, descriptions, entry_fees, "DHBW") ==
          make_pair<string, int>("Quelle der Erkenntnis", 0));
    CHECK(get_place_info(places, descriptions, entry_fees, "Uni Mannheim") ==
          make_pair<string, int>("", -1));
>>>>>>> e9af9051431861257b5997746546e184ce9c2cce
  }
}
