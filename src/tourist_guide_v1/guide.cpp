#include "guide.h"

namespace guide {
std::pair<std::string, int> get_place_info(
    std::vector<std::string> places, std::vector<std::string> descriptions,
    std::vector<int> entry_fees, std::string place) {
  for (int i = 0; i < places.size(); i++) {
    if (places[i] == place) {
      return {descriptions[i], entry_fees[i]};
    }
  }
  return {"", -1};
}
}  // namespace guide
