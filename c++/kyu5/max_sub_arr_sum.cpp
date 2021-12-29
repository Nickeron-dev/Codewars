#include <vector>

int maxSequence(const std::vector<int>& arr){
  bool is_all_negatives = true;
  bool is_all_positives = true;
  int sum_array = 0;
  for (auto &element : arr)
  {
    sum_array += element;
    if (element >= 0)
    {
      is_all_negatives = false;
    }
    if (element <= 0)
    {
      is_all_positives = false;
    }
  }
  if (is_all_negatives && (! is_all_positives))
  {
    return 0;
  }
  if (is_all_positives)
  {
    return sum_array;
  }
  
  int largest_sum = 0;
  for (int i = 0; i < arr.size(); i++)
  {
    int current_sum = 0;
    for (int j = i; j < arr.size(); j++)
    {
      current_sum += arr[j];
      largest_sum = (current_sum > largest_sum) ? current_sum : largest_sum;
    }
    current_sum = 0;
  }
  return largest_sum;
}

