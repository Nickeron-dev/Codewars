#include <string>

std::string format_duration(int seconds) {
  if (seconds == 0)
  {
    return "now";
  }
  
  std::vector<std::string> answer;
  int division_by_year = seconds / 31536000;
  if (division_by_year >= 1)
  {
    if (division_by_year == 1)
    {
      answer.push_back(std::to_string(division_by_year) + " year");
    }
    else
    {
      answer.push_back(std::to_string(division_by_year) + " years");
    }
  }
  seconds -= division_by_year * 31536000;
  int division_by_day = seconds / 86400;
  if (division_by_day >= 1)
  {
    if (division_by_day == 1)
    {
      answer.push_back(std::to_string(division_by_day) + " day");
    }
    else
    {
      answer.push_back(std::to_string(division_by_day) + " days");
    }
  }
  seconds -= division_by_day * 86400;
  
  int division_by_hour = seconds / 3600;
  if (division_by_hour >= 1)
  {
    if (division_by_hour == 1)
    {
      answer.push_back(std::to_string(division_by_hour) + " hour");
    }
    else
    {
      answer.push_back(std::to_string(division_by_hour) + " hours");
    }
  }
  seconds -= division_by_hour * 3600;
  
  int division_by_minute = seconds / 60;
  if (division_by_minute >= 1)
  {
    if (division_by_minute == 1)
    {
      answer.push_back(std::to_string(division_by_minute) + " minute");
    }
    else
    {
      answer.push_back(std::to_string(division_by_minute) + " minutes");
    }
  }
  seconds -= division_by_minute * 60;
  
  if (seconds >= 1)
  {
    if (seconds == 1)
    {
      answer.push_back(std::to_string(seconds) + " second");
    }
    else
    {
      answer.push_back(std::to_string(seconds) + " seconds");
    }
  }
  
  std::string result {};
  result += answer[0];
  if (answer.size() == 1)
  {
    return result;
  }
  else if (answer.size() == 2)
  {
    result += " and " + *(--answer.end());
    return result;
  }
  
  for (auto i = ++(answer.begin()); i != --answer.end(); i++)
  {
    result += ", " + *i;
  }
  result += " and " + *(--answer.end());
  return result;
}

