#include <vector>

int find_even_index (const std::vector <int> numbers) {
  int sum_left = 0;
  int sum_right = 0;
  for (int i = 0; i < numbers.size(); i++)
  {
    for (int j = 0; j < numbers.size(); j++)
    {
      if (j < i)
      {
        sum_left += numbers[j];
      }
      else if (j > i)
      {
        sum_right += numbers[j];
      }
    }
    if (sum_left == sum_right)
    {
      return i;
    }
    sum_left = 0;
    sum_right = 0;
  }
  
  return -1;
}

