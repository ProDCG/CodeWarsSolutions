#include <string>
#include <vector>

std::vector<std::string> towerBuilder(unsigned nFloors) {
  std::vector<std::string> tower;
  for (unsigned i = 0; i < nFloors; i++) {
    std::string space = std::string(nFloors - i - 1, ' ');
    std::string stars = std::string((i * 2) + 1, '*');
    tower.push_back(space + stars + space);
  }
  return tower;
}