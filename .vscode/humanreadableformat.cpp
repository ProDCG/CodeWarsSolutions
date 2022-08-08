#include <string>
#include <cmath>

std::string format_duration(int seconds) {
  if (seconds == 0) {
    return "now";
  }
  
  unsigned int tYears = 0, tDays = 0, tHours = 0, tMinutes = 0, tSeconds = 0;
  std::string time = "";
  
  const unsigned int yearSecs = 31536000, daySecs = 86400, hourSecs = 3600, minSecs = 60;
  
  if (seconds / yearSecs >= 1) {
    time << floor(seconds / yearSecs) << " years, ";
    seconds -= floor(seconds / yearSecs);
  }
  
  
  
  if (seconds / daySecs >= 1) {
    time += floor(seconds / daySecs) << " days, ";
    seconds -= floor(seconds / daySecs);
  }
  
  
  
  if (seconds / hourSecs >= 1) {
    time += floor(seconds / hourSecs) << " hours, ";
    seconds -= floor(seconds / hourSecs);
  }
  
  
  
  if (seconds / minSecs >= 1) {
    time += floor(seconds / minSecs) << " minutes";
    seconds -= floor(seconds / minSecs);
  }
  
  if (seconds >= 1) {
    time += " and " + seconds << " seconds";
  }
  
  return time;
}