#include <vector>
#include <map>

// !!! IMPORTANT !!!
// This solution I've decided to make very optimised(2n, instead of n * n)
// so I used solution which optimises with std::map.

int score(const std::vector<int>& dice) {
  std::map<int, int> results;
  for (int e : dice)
  {
    if (results.count(e) > 0)
    {
      results.at(e) += 1;
    }
    results.insert(std::pair<int, int> (e, 1));
  }
  
  int score {};
  for (std::pair<int, int> e : results)
  {
    if (e.second >= 3)
    {
      if (e.first == 1)
      {
        score += 1000;
      }
      else
      {
        score += e.first * 100;
      } 
      e.second -= 3;
    }
    if (e.first == 1)
    {
      score += e.second * 100;
    }
    if (e.first == 5)
    {
      score += e.second * 50;
    }
  }
  return score;
}

