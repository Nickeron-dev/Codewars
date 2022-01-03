#include <vector>
#include <utility>
#include <set>

int sum_intervals(std::vector<std::pair<int, int>> intervals)
{
  std::vector<std::vector<int>> all;
  for (int i = 0; i < intervals.size(); i++)
  {
    std::vector<int> now;
    for (int j = intervals[i].first + 1; j <= intervals[i].second; j++)
    {
      now.push_back(j);
    }
    all.push_back(now);
  }
  std::set<int> all_in_set;
  for (int i = 0; i < all.size(); i++)
  {
    for (int j = 0; j < all[i].size(); j++)
    {
      all_in_set.insert(all[i][j]);
    }
  }
  
  return all_in_set.size();
}

