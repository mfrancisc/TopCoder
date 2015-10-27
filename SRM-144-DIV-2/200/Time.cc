
#include<iostream>
#include<string>
using namespace std;

class Time
{
  public:
    string whatTime(int total)
    {
      int seconds, hours, minutes, s;
      string timeString = "";
      hours = total / 3600;
      s = total % 3600;
      minutes = s / 60;
      seconds = s % 60;

      timeString.append(to_string(hours));
      timeString.append(":");
      timeString.append(to_string(minutes));
      timeString.append(":");
      timeString.append(to_string(seconds));

      return timeString;
    }
};


