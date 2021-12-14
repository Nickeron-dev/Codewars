#include <vector>
#include <algorithm>

std::vector<int> move_zeroes(const std::vector<int>& input) {
  std::vector<int> answer;
  int zero_counter = 0;
  for (int i = 0; i < input.size(); i++)
  {
    std::cout << input[i] << std::endl;
    if (input[i] == 0)
    {
      zero_counter++;
    }
    else
    {
      answer.push_back(input[i]);
    }
    
  }
  
  for (int i = 0; i < zero_counter; i++)
  {
    answer.push_back(0);
  }
  
  return answer;
}

