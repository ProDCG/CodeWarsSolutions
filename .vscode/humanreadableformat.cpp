#include <string>
#include <vector>

std::string format_duration(int seconds) {
  if (seconds == 0) {
    return "now";
  }
  
  unsigned int years = (seconds / 31536000);
  unsigned int days = (seconds / 86400) % 365;
  unsigned int hours = (seconds / 3600) % 24;
  unsigned int minutes = (seconds / 60) % 60;
  seconds = (seconds % 60);
  
  std::vector<std::pair<unsigned int, std::string>> times = {{years, "year"}, {days, "days"}, {hours, "hour"}, {minutes, "minute"}, {seconds, "second"}};
  std::string format = "";
  
  for (int i = 0; i < times.size(); i++) {
    if (times.at(i).first == 0) {
      times.erase(i);
    } else if (times.at(i).first > 1) {
      times.at(i).second += "s";
    }
  }
  
  format = times.at(0).first + " " + times[times.begin()].second;
}