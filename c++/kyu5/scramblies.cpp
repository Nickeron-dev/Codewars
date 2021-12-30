#include<string>

bool scramble(const std::string& s1, const std::string& s2){
  if (s1.size() < s2.size())
  {
    return false;
  }
  std::string string_1 = s1;
  std::string string_2 = s2;
//   std::cout << string_1 << '\n';
//   std::cout << string_2 << '\n';
  int counter {};
  for (int i = 0; i < string_1.size(); i++)
  {
    if (counter == string_2.size())
    {
//       std::cout << "HEY" << '\n';
      break;
    }
    for (int j = 0; j < string_2.size(); j++)
    {
      
      if (string_1[i] == string_2[j] && string_1[i] != '!')
      {
        string_1[i] = '!';
        string_2[j] = '!';
        counter++;
//         std::cout << string_1 << '\n';
//         std::cout << string_2 << '\n';
        i--;
        j--;
      }
    }
  }
//   std::cout << string_2 << '\n';
  for (auto e : string_2)
  {
    if (e != '!')
    {
      return false;
    }
  }
  
  return true;
}

