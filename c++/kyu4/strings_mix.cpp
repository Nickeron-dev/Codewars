#include <map>
#include <vector>
#include <cstring>

class Mix
{
public:
  static std::string mix(const std::string &s1, const std::string &s2)
  {
    std::cout << "Test: \n";
    std::cout << s1 << '\n';
    std::cout << s2 << '\n';
    if (s1.size() == 0 || s2.size() == 0)
    {
      return "";
    }
    std::map<char, std::pair<int, int>> letters_with_numbers;
    
    for (char e : s1)
    {
      if ((int) e >= 97 && (int) e <= 122)
      {
        if (letters_with_numbers.count(e) <= 0)
        {
          letters_with_numbers.insert(std::pair<char, std::pair<int, int>> (e, std::pair<int, int> (1, 0)));
          continue;
        }
        letters_with_numbers.at(e).first += 1;
      }
    }
    for (char e : s2)
    {
      if ((int) e >= 97 && (int) e <= 122)
      {
        if (letters_with_numbers.count(e) <= 0)
        {
          letters_with_numbers.insert(std::pair<char, std::pair<int, int>> (e, std::pair<int, int> (0, 1)));
          continue;
        }
        letters_with_numbers.at(e).second += 1;
      }
    }
    std::string answer {};
    for (auto e : letters_with_numbers)
    {
      if (e.second.first == e.second.second && e.second.first > 1)
      {
        answer += "=:";
        for (int i = 0; i < e.second.first; i++)
        {
          answer += e.first;
        }
        answer += "/";
        continue;
      }
      if (e.second.first > e.second.second && e.second.first > 1)
      {
        answer += "1:";
        for (int i = 0; i < e.second.first; i++)
        {
          answer += e.first;
        }
        answer += "/";
        continue;
      }
      if (e.second.first < e.second.second && e.second.second > 1)
      {
        answer += "2:";
        for (int i = 0; i < e.second.second; i++)
        {
          answer += e.first;
        }
        answer += "/";
        continue;
      }
    }
    answer = answer.substr(0, answer.size() - 1);
    std::vector<std::string> values;
    std::string s {};
    for (auto e : answer)
    {
      if (e == '/')
      {
        values.push_back(s);
        s = "";
        continue;
      }
      s += e;
    }
    values.push_back(s);
    int max_size = 0;
    for (std::size_t i = 0; i < values.size(); i++)
    {
      if (max_size < values[i].size())
      {
        max_size = values[i].size();
      }
      for (std::size_t j = 0; j < values.size(); j++)
      {
        if (values[i].size() > values[j].size())
        {
          std::swap(values[i], values[j]);
        }
      }
    }
    
    std::vector<std::vector<std::string>> double_array(max_size + 1);
    for (std::size_t i = 0; i < values.size(); i++)
    {
      double_array[values[i].size()].push_back(values[i]);
    }
    for (std::size_t i = 0; i < double_array.size(); i++)
    {
      std::sort(double_array[i].begin(), double_array[i].end());
      
    }
    std::string result {};
    for (std::size_t j = double_array.size() - 1; j > 0; j--)
    {
      std::cout << double_array[j].size() << '\n';
      for (std::size_t i = 0; i < double_array[j].size(); i++)
      {
        if (double_array[j][i].size() > 0)
        {
          result += double_array[j][i] + "/";
          std::cout << double_array[j][i] << " ";
        }
        
      }
      
    }
    if (result.size() == 0)
    {
      return "";
    }
    result = result.substr(0, result.size() - 1);
    std::cout << "REsult: " << result << std::endl;
    
    return result;
  }
};


