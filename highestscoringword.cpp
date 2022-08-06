#include <string>

std::string highestScoringWord(const std::string &str)
{
  std::string newStr = str;
  newStr += ' ';
  int sum = 0; int max = 0;
  std::string curWord = ""; std::string maxWord = "";
  
  for (unsigned int i = 0; i < newStr.length(); i++) {
    if (newStr[i] != ' ') {
      sum += ((int)newStr[i]) - 96;
      curWord += newStr[i];
    } else {
      if (max < sum) {
        max = sum;
        maxWord = curWord;
      }
      sum = 0;
      curWord = "";
    }
  }
  
  return maxWord;
}
