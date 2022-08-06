#include <string>

std::string to_alternating_case(const std::string& str)
{
  std::string newStr = str;
  for (char &letter : newStr) {
    letter = isupper(letter) ? tolower(letter) : toupper(letter);
  }
	return newStr;
}