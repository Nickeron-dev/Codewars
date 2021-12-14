#include <vector>
#include <algorithm>

std::vector<int> beggars(const std::vector<int>& values, unsigned int n){
  std::vector<int> answer(n);
  std::vector<int> values_copy;
  if (n == 0)
  {
    return values_copy;
  }
  
  for (int i = 0; i < values.size(); i++)
  {
    values_copy.push_back(values[i]);
  }

  int current_beggar = 1;
  int initial_size = values_copy.size();

  for (int i = 0; i < initial_size; i++)
  {
    answer[current_beggar - 1] += values_copy[0];
    values_copy.erase(values_copy.begin());
    current_beggar = current_beggar >= n ? 1 : current_beggar + 1;
  }
  
  return answer;
}


