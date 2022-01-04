#include <string>
#include <vector>

std::string range_extraction(std::vector<int> args) {
  std::string answer {};
  for (std::size_t i = 1; i <= args.size(); i++)
  {
    answer += std::to_string(args[i - 1]);
    if (args[i - 1] + 1 == args[i])
    {
      int counter = 2;
      for (std::size_t j = i + 1; j <= args.size(); j++)
      {
        if (args[j - 1] + 1 == args[j])
        {
          counter++;
          continue;
        }
        break;
      }
      if (counter != 2)
      {
        answer += "-" + std::to_string(args[counter - 2 + i]);
        i += counter - 1;
      }
      
    }
    if (i != args.size())
    {
     answer += ",";
    }
  }
  return answer;
}

