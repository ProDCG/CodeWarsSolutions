#include <string>

std::string countSheep(int number) {
  std::string val = "";
  for (int i = 1; i <= number; ++i) {
    val += (std::to_string(i) + " sheep...");
  }
  return val;
}