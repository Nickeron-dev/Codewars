// This solution works but it is too slow to pass main tests
#include <set>
class BestTravel
{
public:
  static void recursive_all_possibles(std::vector<int> cur,
                                     std::vector<std::vector<int>> &result,
                                     std::vector<int> &given,
                                     int amount)
  {
          if (cur.size() >= amount)
          {
            std::set<int> s(cur.begin(), cur.end());
            for (auto e : cur)
            {
              s.insert(e);
            }
            if (s.size() == amount)
            {
              result.push_back(cur);
            }
            return;
          }
          for (int i = 0; i < given.size(); i++)
          {
                  std::vector<int> current(cur.size() + 1);
                  for(int j = 0; j < cur.size(); j++)
                  {
                          current[j] = cur[j];
                  }
                  current[current.size() - 1] = given[i];
                  recursive_all_possibles(current, result, given, amount);
          }
          return;
  }

  static int chooseBestSum(int t, int k, std::vector<int>& ls)
  {
    std::vector<std::vector<int>> result;
    std::vector<int> given;
    std::vector<int> current_permutations;
    int amount = k;
    for (auto e : ls)
    {
      given.push_back(e);
    }
    recursive_all_possibles(current_permutations, result, given, amount);

    int answer_sum = 0;
    for (auto e : result)
    {
      int sum = 0;
      for (auto e_inside : e)
      {
        sum += e_inside;
      }
      if (sum == t)
      {
        return sum;
      }
      if (sum < t && sum > answer_sum)
      {
        answer_sum = sum;
      }
    }
    if (answer_sum != 0)
    {
      return answer_sum;
    }

    return -1;
  }
};



// Trying to change vector to set
#include <set>
class BestTravel
{
public:
  static void recursive_all_possibles(std::set<int> cur,
                                     std::vector<std::set<int>> &result,
                                     std::vector<int> &given,
                                     int amount)
  {
          if (cur.size() >= amount)
          {
            std::set<int> s(cur.begin(), cur.end());
            if (s.size() == amount)
            {
              result.push_back(cur);
            }
            return;
          }
          for (int i = 0; i < given.size(); i++)
          {
                  std::set<int> current(cur.begin(), cur.end());
                  current.insert(given[i]);
                  recursive_all_possibles(current, result, given, amount);
          }
          return;
  }

  static int chooseBestSum(int t, int k, std::vector<int>& ls)
  {
    std::vector<std::set<int>> result;
    std::vector<int> given;
    std::set<int> current_permutations;
    int amount = k;
    for (auto e : ls)
    {
      given.push_back(e);
    }
    recursive_all_possibles(current_permutations, result, given, amount);

    int answer_sum = 0;
    for (auto e : result)
    {
      int sum = 0;
      for (auto e_inside : e)
      {
        sum += e_inside;
      }
      if (sum == t)
      {
        return sum;
      }
      if (sum < t && sum > answer_sum)
      {
        answer_sum = sum;
      }
    }
    if (answer_sum != 0)
    {
      return answer_sum;
    }

    return -1;
  }
};
