#include <utility>
#include <vector>
#include <cmath>

class SumSquaredDivisors
{
public:
    static std::vector<std::pair<long long, long long>> listSquared(long long m, long long n)
    {
      std::vector<std::pair<long long, long long>> answer;
      for (long long i = m; i <= n; i++)
      {
        long long sum {};
        for (long long j = 1; j <= i; j++)
        {
          if (i % j == 0)
          {
            sum += j * j;
          }
        }
        
        long double sq = std::sqrt(sum);
        if ((sq - std::floor(sq) == 0))
        {
          answer.push_back(std::pair<long long, long long> (i, sum));
        }
      }
      return answer;
    }
};


