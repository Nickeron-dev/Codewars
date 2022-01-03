#include <vector>
#include <utility>
#include <set>

int sum_intervals(std::vector<std::pair<int, int>> intervals)
{
  
  std::set<double> all_values;
  for (int i = 0; i < intervals.size(); i++)
  {
    for (int j = 1; j < intervals.size(); j++)
    {
      if (intervals[i].second > intervals[j].first
          && intervals[i].second < intervals[j].second)
      {
        intervals[i].second = intervals[j].second;
        intervals[j].first = 0;
        intervals[j].second = 0;
      }
    }
  }
  std::cout << "\nInters: \n";
  bool anyChanges = true;
  while (anyChanges)
  {
    for (int j = 0; j < intervals.size(); j++)
    {
      std::cout << intervals[j].first << "  " << intervals[j].second << '\n';
      for (int i = intervals[j].first; i <= intervals[j].second; i++)
      {
  //       std::cout << i << " ";
        anyChanges = false;
        if (all_values.count((double) i) <= 0)
        {
          all_values.insert((double) i);
          if (i == intervals[j].second)
          {
            all_values.insert( (double) i + 0.5);
          }
          anyChanges = true;
        }
        

      }
    }
  }
  
  std::cout << std::endl;
//   all_values.sort();
  std::cout << "All: \n";
  for (auto i = all_values.begin(); i != all_values.end(); i++)
  {
    std::cout << *i << " ";
  }
  std::cout << std::endl;
  int answer {};
  for (auto i = ++(all_values.begin()); i != all_values.end(); i++)
  {
    std::cout << *(--i) << " ";
    i++;
    if (*i - *(--i) == 1)
    {
      std::cout << "count: " << *(++i) << " - " << *(--i) << '\n';
      answer++;
    }
    i++;
  }
  return answer;
}

