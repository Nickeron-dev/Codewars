#include <string>
#include <sstream>

std::string sum_strings(const std::string& a, const std::string& b) {
  std::string max = a.size() > b.size() ? a : b;
  std::string min = a.size() > b.size() ? b : a;
  int extra = 0;
  std::string result {};
  for (int i = max.size() - 1; i >= 0; i--)
  {
    int index_second = min.size() - (max.size() - i);
    if (index_second <= -1)
    {
      std::stringstream ss1;
      int num1;
      ss1 << max[i];
      ss1 >> num1;
      int sum = num1 + extra;
      extra = 0;
      std::string sum_to_string = std::to_string(sum);
      if (sum >= 10)
      {
        extra++;
        result = sum_to_string[1] + result;
      }
      else
      {
        result = sum_to_string[0] + result;
      }
      continue;
    }
    std::stringstream ss1;
    int num1;
    ss1 << max[i];
    ss1 >> num1;
    std::stringstream ss2;
    int num2;
    ss2 << min[index_second];
    ss2 >> num2;
    int sum = num1 + num2 + extra;
    extra = 0;
    std::string sum_to_string = std::to_string(sum);
    if (sum >= 10)
    {
      extra++;
      result = sum_to_string[1] + result;
    }
    else
    {
      result = sum_to_string[0] + result;
    }
    
  }
  if (extra != 0)
  {
    result.insert(0, std::to_string(extra));
  }
  return result;
}

