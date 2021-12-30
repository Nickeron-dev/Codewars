#include<string>
#include <map>

bool scramble(const std::string& s1, const std::string& s2){
  if (s1.size() < s2.size())
  {
    return false;
  }
  std::string string_1 = s1;
  std::string string_2 = s2;
//   std::cout << string_1 << '\n';
//   std::cout << string_2 << '\n';
  std::map<char, int> all;
  for (int i = 0; i < string_1.size(); i++)
  {
    if (all.count(string_1[i]) != 0)
    {
      all.at(string_1[i]) += 1;
//       std::cout <<" fsdf\n";
    }
    all.insert(std::pair<char, int> (string_1[i], 1));
  }
  int counter = 0;
  for (int i = 0; i < string_2.size(); i++)
  {
    if (all.count(string_2[i]) != 0 && all.at(string_2[i]) > 0)
    {
//       std::cout << all.at(string_1[i]) >= 1 << '\n';
      counter++;
      all.at(string_2[i]) -= 1;
    }
    else
    {
      return false;
    }
  }
  if (counter == string_2.size())
  {
    return true;
  }
  return false;
}

