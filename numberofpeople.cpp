#include <utility>
#include <vector>

unsigned int number(const std::vector<std::pair<int, int>>& busStops){
  unsigned int num = 0;
  for (auto const& people : busStops) {
    num += people.first;
    num -= people.second;
  }
  return num;
}