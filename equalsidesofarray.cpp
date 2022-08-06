#include <vector>
#include <numeric>

int find_even_index (const std::vector <int> numbers) {
  for (unsigned int i = 0; i < numbers.size(); i++) {
    if (std::reduce(numbers.begin(), numbers.begin() + i) == (std::reduce(numbers.begin() + i + 1, numbers.end()))) {
      return i;
    }
  }
  return -1;
}