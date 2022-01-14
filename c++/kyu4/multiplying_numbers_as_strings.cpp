#include <iostream>
#include <string>
#include <vector>

#define v_str std::vector<std::string>
typedef std::string s;

std::string multiply(std::string a, std::string b) {
  std::cout << "a: " << a << '\n';
  std::cout << "b: " << b << '\n';
  v_str values_to_sum {};
  if (a.size() > 1)
  {
    for (std::size_t i = 0; i < a.size(); i++)
    {
      if (a[i] == '0')
      {
        a = a.substr(i + 1, a.size() - (i + 1));
        continue;
      }
      break;
    }
  }
  
  if (b.size() > 1)
  {
    for (std::size_t i = 0; i < b.size(); i++)
    {
      if (b[i] == '0')
      {
        b = b.substr(i + 1, b.size() - (i + 1));
        continue;
      }
      break;
    }
  }
  
  for (int i = a.size() - 1; i >= 0; i--)
  {
    s current_number {}; 
    int extra {};
    std::stringstream ss_a;
    int num_a;
    ss_a << a[i];
    ss_a >> num_a;
    for (int j = b.size() - 1; j >= 0; j--)
    {
      std::stringstream ss_b;
      int num_b;
      ss_b << b[j];
      ss_b >> num_b;
      
      std::string res = std::to_string(num_a * num_b + extra);
      if (j == 0)
      {
        current_number = res + current_number;
        continue;
      }
      current_number = res[res.size() - 1] + current_number;
      extra = 0;
      if (res.size() > 1)
      {
        std::stringstream ss_extra;
        int num_extra;
        ss_extra << res[0];
        ss_extra >> num_extra;
        extra = num_extra;
      }
    }
    for (int k = a.size() - 1 - i; k > 0; k--)
    {
      current_number += "0";
    }
    values_to_sum.push_back(current_number);
  }
  
  for (std::size_t i = 0; i < values_to_sum.size() - 1; i++)
  {
    s a = values_to_sum[i];
    s b = values_to_sum[i + 1];
    std::string max = a.size() > b.size() ? a : b;
    std::string min = a.size() > b.size() ? b : a;
    int extra = 0;
    std::string result {};
    for (int i = max.size() - 1; i >= 0; i--)
    {
      int index_second = min.size() - (max.size() - i);
      if (index_second <= -1)
      {
        std::stringstream ss1;
        int num1;
        ss1 << max[i];
        ss1 >> num1;
        int sum = num1 + extra;
        extra = 0;
        std::string sum_to_string = std::to_string(sum);
        if (sum >= 10)
        {
          extra++;
          result = sum_to_string[1] + result;
        }
        else
        {
          result = sum_to_string[0] + result;
        }
        continue;
      }
      std::stringstream ss1;
      int num1;
      ss1 << max[i];
      ss1 >> num1;
      std::stringstream ss2;
      int num2;
      ss2 << min[index_second];
      ss2 >> num2;
      int sum = num1 + num2 + extra;
      extra = 0;
      std::string sum_to_string = std::to_string(sum);
      if (sum >= 10)
      {
        extra++;
        result = sum_to_string[1] + result;
      }
      else
      {
        result = sum_to_string[0] + result;
      }

    }
    if (extra != 0)
    {
      result.insert(0, std::to_string(extra));
    }
    values_to_sum[i + 1] = result;
  }
  s answer = values_to_sum[values_to_sum.size() - 1];
  if (answer.size() > 1)
  {
    for (std::size_t i = 0; i < answer.size(); i++)
    {
      if (answer[i] == '0' && answer.size() - 1 >= 1)
      {
        answer = answer.substr(i + 1, answer.size() - (i + 1));
        continue;
      }
      break;
    }
  }
  return answer;
}

