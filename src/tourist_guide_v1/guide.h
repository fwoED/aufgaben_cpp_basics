#ifndef GUIDE_H
#define GUIDE_H

#include <string>
#include <utility>
#include <vector>

namespace guide {

/// Erwartet drei Listen: "places", "descriptions", "entry_fees".
/// Erwartet außerdem einen String "place".
/// Liefert die Beschreibung und die Gebühr für den Ort "place" zurück.
/// Wenn "place" nicht in der Liste vorkommt, wird eine leere Beschreibung
/// und eine Gebühr von -1 zurückgegeben.
std::pair<std::string, int> get_place_info(
    std::vector<std::string> places, std::vector<std::string> descriptions,
    std::vector<int> entry_fees, std::string place);

}  // namespace guide

#endif  // GUIDE_H
