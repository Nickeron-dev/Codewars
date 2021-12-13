#include <vector>
#include <algorithm>

std::vector<int> recursive_beggar_counter(std::vector<int>& values, unsigned int n, unsigned int beggar, std::vector<int>& answer)
{
  //std::vector<int> answer(n);
  std::cout << values.size() << std::endl;
  if (values.size() > 0)
  {
    std::cout << "Beggar: " << beggar << std::endl;
    int index_element = (values[0] > values[values.size() - 1]) ? 0 : values.size() - 1;
    answer[beggar - 1] = values[index_element];
    answer.erase(values.begin() + index_element);
    int next_beggar = (beggar > n) ? 1 : (beggar + 1);
    recursive_beggar_counter(values, n, next_beggar, answer);
  }
  return answer;
}

std::vector<int> beggars(const std::vector<int>& values, unsigned int n){
  std::vector<int> answer(n);
  std::vector<int> values_copy;
  for (int i = 0; i < values.size(); i++)
  {
    values_copy.push_back(values[i]);
  }
  
  std::cout << values_copy.size() << std::endl;
//   for (int i = 0; i < n; i++)
//   {
  answer = recursive_beggar_counter(values_copy, n, 1, answer);
  //}
  
  return answer;
}


