#include <map>
class PrimeDecomp
{
public:
    static std::string factors(int lst)
    {
      int copy = lst;
      std::map<int, int> factors;
      for (int i = 2; i <= copy; i += 2)
      {
//         std::cout << "Now: " << i << '\n';
        if (lst == 1)
        {
          std::cout << "FDDF\n";
          break;
        }
        if (lst % i == 0 && is_prime(i))
        {
          
          lst /= i;
          std::cout << "here: i: " << i << " lst: " << lst << "\n";
          
          
          if (factors.count(i) > 0)
          {
            factors.at(i) += 1;
//             continue;
          }
          factors.insert(std::pair<int, int> (i, 1));
          i -= 2;
        }
        
        if (i == 2)
        {
          i--;
        }
      }
      std::string result = "";
      for (auto e : factors)
      {
        result += "(" + std::to_string(e.first);
        if (e.second != 1)
        {
          result += "**" + std::to_string(e.second);
        }
        std::cout << e.first << " " << e.second << '\n';
        result += ")";
      }
      return result;
    }
  
  static bool is_prime(int num)
  {
    for (int i = 2; i < num / 2; i++)
    {
      if (num % i == 0)
      {
        return false;
      }
    }
    return true;
  }
};


