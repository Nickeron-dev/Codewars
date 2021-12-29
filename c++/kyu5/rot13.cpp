#include <string>
using namespace std;

string rot13(string msg)
{
  string changed = "";
  for (int i = 0; i < msg.size(); i++)
  {
    int result_number = (int) msg.at(i);
    if (std::isalpha(msg[i]))
    {
      bool isCapital = std::isupper(msg[i]);
      result_number += 13;
      if (result_number > 122 && ( ! isCapital))
      {
        result_number -= 122 - 96;
      }
      else if (result_number > 90 && isCapital)
      {
        result_number -= 90 - 64;
      }
    }
    changed += (char) (result_number);
  }
  return changed;
}

