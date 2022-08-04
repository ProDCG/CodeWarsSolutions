#include <vector>

std::vector<int> digitize(unsigned long n) 
{
    std::vector <int> num;
    do {
      num.push_back(n % 10);
      n /= 10;
    } while (n != 0);
    return num;
}