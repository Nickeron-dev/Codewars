#include<vector>

bool isValidWalk(std::vector<char> walk) {
  bool isStop = walk.size() != 10 ? true : false;
  if (isStop)
  {
    return false;
  }
  int n = 0, s = 0, e = 0, w = 0;
  for (int i = 0; i < walk.size(); i++)
  {
    if ((char) walk[i] == 'n')
    {
      n++;
    }
    else if ((char) walk[i] == 's')
    {
      s++;
    }
    else if ((char) walk[i] == 'e')
    {
      e++;
    }
    else if ((char) walk[i] == 'w')
    {
      w++;
    }
  }
  if (n == s && e == w)
  {
    return true;
  }
  return false;
}

