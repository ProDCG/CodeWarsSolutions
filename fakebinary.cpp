#include <string>
#include <regex>

std::string fakeBin(std::string str){
  str = std::regex_replace(str, std::regex("[1234]"), "0");
  str = std::regex_replace(str, std::regex("[56789]"), "1");
  return str;
}