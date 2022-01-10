#include <string>
#include <vector>
#include <cstring>

using namespace std;

long parse_int(std::string number) {
  if (number == "one million")
  {
    return 1000000;
  }
  if (number == "zero")
  {
    return 0;
  }
  vector<string> nstr = {"one", "two", "thr", "fou", "fiv", "six", "sev", "eig", "nin", "ten", "ele", "twe", "fif"};
  string s {};
  vector<string> all;
  long answer {};
  for(size_t i = 0; i < number.size(); i++)
  {
    if (number[i] == ' ')
    {
      if (s == "and")
      {
        s = "";
        continue;
      }
      all.push_back(n);
      s = "";
    }
    s += num;
  }
  for (size_t i = 0; i < all.size(), i++)
  {
    if (all[i] == "and")
    {
      continue;
    }
    if (all[i] == "hundred")
    {
      for (size_t j = 0; j < nstr.size(); j++)
      {
        if (all[i - 1].substr(0, 3) == nstr[j])
        {
          answer += (j + 1) * 100;
        }
      }
    }
    else if (all[i] == "thousand")
    {
      for (size_t j = 0; j < nstr.size(); j++)
      {
        if (all[i - 1].substr(0, 3) == nstr[j])
        {
          answer += (j + 1) * 1000;
        }
      }
    }
  }
  return 1;
}
