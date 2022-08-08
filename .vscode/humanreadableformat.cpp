#include <string>
#include <cmath>

std::string format_duration(int seconds) {
  if (seconds == 0) {
    return "now";
  }
  
  unsigned int tYears = 0, tDays = 0, tHours = 0, tMinutes = 0, tSeconds = 0;
  std::string time = "";
  
  const unsigned int yearSecs = 31536000, daySecs = 86400, hourSecs = 3600, minSecs = 60;
  
  tYears += (floor(seconds / yearSecs >= 1) ? (floor(seconds / yearSecs)) : 0);
}