#include <vector>
#include <string>
// #include <string.h>

class WeightSort
{
public:
    static std::string orderWeight(const std::string &strng)
    {
      std::vector<std::pair<long long, long long>> values;
      std::string str {};
      int current_number_sum = 0;
      for (int i = 0; i < strng.size(); i++)
      {
        if (strng[i] != ' ')
        {
          current_number_sum += ((int) strng[i]) - 48;
        }
        
        if (strng[i] == ' ' || i == strng.size() - 1)
        {
          if (i == strng.size() - 1)
          {
            str += strng[i];
          }
          std::stringstream ss;
          ss << str;
          long long num;
          ss >> num;
          values.push_back(std::pair<long long, long long> (current_number_sum, num));
          current_number_sum = 0;
          str = "";
          continue;
        }
        str += strng[i];
      }

      std::string answer {};
      for (int i = 0; i < values.size(); i++)
      {
        for (int j = i; j < values.size(); j++)
        {
          if (values[i].first > values[j].first)
          {
            std::pair<long long, long long> temp = values[i];
            values[i] = values[j];
            values[j] = temp;
          }
          if (values[i].first == values[j].first)
          {
            if (std::to_string(values[i].second) > std::to_string(values[j].second))
            {
              std::pair<long long, long long> temp = values[i];
              values[i] = values[j];
              values[j] = temp;
            }
          }
        }
        if (i == values.size() - 1)
        {
          answer += std::to_string(values[i].second);
          continue;
        }
        answer += std::to_string(values[i].second) + " ";
      }
      return answer;
    }
};


