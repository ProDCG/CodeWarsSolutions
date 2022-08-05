#include <string>
using namespace std;

string rot13(string msg)
{
  string ciphered = msg;
  for (int i = 0; i < msg.length(); i++) {
    if ((ciphered[i] >= 'a' && ciphered[i] <= 'm') || (ciphered[i] >= 'A' && ciphered[i] <= 'M')) {
      ciphered[i] += 13;
    } else if ((ciphered[i] >= 'n' && ciphered[i] <= 'z') || (ciphered[i] >= 'N' && ciphered[i] <= 'Z')) {
      ciphered[i] -= 13;
    }
  }
  return ciphered;
}
