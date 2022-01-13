#include <string>
#include <vector>
#include <cstring>

using namespace std;

long parse_int(std::string number) {
  if (number == "one million")
  {
    return 1000000;
  }
  else if (number == "zero")
  {
    return 0;
  }
  vector<string> nstr = {"on", "tw", "th", "fo", "fi", "si", "se", "ei", "ni", "te", "el"};
  string s {};
  vector<string> all;
  number += " ";
  for(size_t i = 0; i < number.size(); i++)
  {
    if (number[i] == ' ')
    {
      if (s == "and")
      {
        s = "";
        continue;
      }
      all.push_back(s);
      s = "";
      continue;
    }
    else if (number[i] == '-')
    {
      all.push_back(s);
      s = "";
      continue;
    }
    s += number[i];
  }
  long answer {};
  int is_thousand_minus = 0;
  int thousand_index_one = -1;
  for (int i = all.size() - 1; i >= 0; i--)
  {
    cout << all[i] << " ";
    if (all[i] == "hundred")
    {
      if (thousand_index_one > i)
      {
        i--;
        for (size_t j = 0; j < nstr.size(); j++)
        {
          if (all[i].substr(0, 2) == nstr[j])
          {
            answer += (j + 1) * 100000;
          }
        }
        continue;
      }
      i--;
      for (size_t j = 0; j < nstr.size(); j++)
      {
        if (all[i].substr(0, 2) == nstr[j])
        {
          answer += (j + 1) * 100;
        }
      }
      continue;
    }
    if (all[i] + all[i - 1] == "thousandhundred")
    {
      i -= 2;
      for (size_t j = 0; j < nstr.size(); j++)
      {
        if (all[i].substr(0, 2) == nstr[j])
        {
          answer += (j + 1) * 100000;
        }
      }
      continue;
    }
    if (all[i] == "thousand")
    {
      thousand_index_one = i;
      is_thousand_minus = i - 2 == all[i].size() ? 1 : 2;
      i--;
    }
    if (is_thousand_minus >= 1)
    {
      is_thousand_minus--;
      for (size_t j = 0; j < nstr.size(); j++)
      {
        if (all[i].substr(0, 2) == nstr[j])
        {
          if (all[i].substr(all[i].size() - 2, 2) == "ty")
          {
            answer += (j + 1) * 10000;
          }
          else
          {
            answer += (j + 1) * 1000;
          }
        }
      }
      continue;
    }
    for (size_t j = 0; j < nstr.size(); j++)
    {
      if (all[i].substr(0, 2) == nstr[j])
      {
        std::cout << all[i].substr(all[i].size() - 2, 2) << '\n';
        if (all[i].substr(all[i].size() - 2, 2) == "ty")
        {
          answer += (j + 1) * 10;
        }
        else
        {
          if (all[i].substr(all[i].size() - 3, 3) == "een" 
              || all[i].substr(all[i].size() - 3, 3) == "lve")
          {
            answer += j + 1 + 10;
          }
          else 
          {
            answer += j + 1;
          }
        }
      }
    }
  }
  return answer;
}

