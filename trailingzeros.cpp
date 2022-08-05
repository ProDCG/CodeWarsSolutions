#include <cmath>

long zeros(long n) {
  long kMax = log(n) / log(5);
  unsigned long z = 0;
  for (unsigned int k = 0; k < std::floor(kMax); k++) {
    z += floor(n / pow(5, k + 1));
  }
  return z;
}