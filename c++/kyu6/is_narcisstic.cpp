#include <sstream>
#include <cmath>

bool narcissistic( int value ){
  std::string str = std::to_string(value);
  int sum {};
  for (int i = 0; i < str.size(); i++)
  {
    std::stringstream ss;
    int num;
    ss << str[i];
    ss >> num;
    sum += std::pow(num, str.size());
  }
  return (sum == value);
}

