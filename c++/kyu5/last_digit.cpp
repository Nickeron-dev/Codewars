#include <string>
#include <sstream>

int last_digit(const std::string &str1, const std::string &str2) {
  std::cout << "str2: " << str2 << " str1: " << str1 << '\n';
  if (str2 == "0")
  {
    return 1;
  }
  if (str1[str1.size() - 1] == '0')
  {
    return 0;
  }
  if (str1[str1.size() - 1] == '1')
  {
    return 1;
  }
  
  if (str1[str1.size() - 1] == '2')
  {
    std::stringstream ss;
    int num {};
    if (str2.size() >= 2)
    {
      ss << str2.substr(str2.size() - 2, 2);
      ss >> num;
    }
    else
    {
      ss << str2.substr(str2.size() - 1, 2);
      ss >> num;
    }
    if (num % 4 == 0)
    {
      return 6;
    }
    else if (num % 4 == 2)
    {
      return 4;
    }
    else if (num % 4 == 3)
    {
      return 8;
    }
    else
    {
      return 2;
    }
  }
  
  if (str1[str1.size() - 1] == '3')
  {
    std::stringstream ss;
    int num {};
    if (str2.size() >= 2)
    {
      ss << str2.substr(str2.size() - 2, 2);
      ss >> num;
    }
    else
    {
      ss << str2.substr(str2.size() - 1, 2);
      ss >> num;
    }
    if (num % 4 == 0)
    {
      return 1;
    }
    else if (num % 4 == 2)
    {
      return 9;
    }
    else if (num % 4 == 3)
    {
      return 7;
    }
    else
    {
      return 3;
    }
  }
  
  if (str1[str1.size() - 1] == '4')
  {
    std::stringstream ss;
    ss << str2[str2.size() - 1];
    int num;
    ss >> num;
    if (num % 2 == 0)
    {
      return 6;
    }
    else
    {
      return 4;
    }
  }

  if (str1[str1.size() - 1] == '5')
  {
    return 5;
  }
  
  if (str1[str1.size() - 1] == '6')
  {
    return 6;
  }
  
  if (str1[str1.size() - 1] == '7')
  {
    std::stringstream ss;
    int num {};
    if (str2.size() >= 2)
    {
      ss << str2.substr(str2.size() - 2, 2);
      ss >> num;
    }
    else
    {
      ss << str2.substr(str2.size() - 1, 2);
      ss >> num;
    }
    if (num % 4 == 0)
    {
      return 1;
    }
    else if (num % 4 == 2)
    {
      return 9;
    }
    else if (num % 4 == 3)
    {
      return 3;
    }
    else
    {
      return 7;
    }
  }
  
  if (str1[str1.size() - 1] == '8')
  {
    std::stringstream ss;
    int num {};
    if (str2.size() >= 2)
    {
      ss << str2.substr(str2.size() - 2, 2);
      ss >> num;
    }
    else
    {
      ss << str2.substr(str2.size() - 1, 2);
      ss >> num;
    }
    if (num % 4 == 0)
    {
      return 6;
    }
    else if (num % 4 == 2)
    {
      return 4;
    }
    else if (num % 4 == 3)
    {
      return 2;
    }
    else
    {
      return 8;
    }
  }
  
  if (str1[str1.size() - 1] == '9')
  {
    std::stringstream ss;
    ss << str2[str2.size() - 1];
    int num;
    ss >> num;
    if (num % 2 == 0)
    {
      return 1;
    }
    else
    {
      return 9;
    }
  }
  
  return 0;
}

