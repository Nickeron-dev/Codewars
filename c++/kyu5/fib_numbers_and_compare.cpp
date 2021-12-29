#include <vector>
typedef unsigned long long ull;
class ProdFib
{
public:
  static std::vector<ull> productFib(ull prod)
  {
    unsigned long long previous = 0;
    unsigned long long before_previous = 0;
    for (unsigned long long i = 1; i < prod; i += previous)
    {
      if (before_previous * previous == prod)
      {
        return std::vector<ull> {before_previous, previous, true};
      }
      if (previous * i == prod)
      {
        return std::vector<ull> {previous, i, true};
      }
      if (before_previous * previous > prod)
      {
        return std::vector<ull> {before_previous, previous, false};
      }
      if (previous * i > prod)
      {
        return std::vector<ull> {previous, i, false};
      }
      previous += i;
      before_previous = i;
    }
    
    return std::vector<ull> {0, 1, true};
  }
};

