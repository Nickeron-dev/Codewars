class GapInPrimes
{
public:
    static std::pair<long long, long long> gap(int g, long long m, long long n) {
      bool isContinue = true;
      for (long long i = m; i <= n; i++)
      {
        if (i + g <= n && isPrime(i) && isPrime(i + g))
        {
          
          isContinue = true;
          for (long long j = i + 1; j < i + g; j++)
          {
            if (isPrime(j)) isContinue = false;
          }
          if (isContinue)
          {
            return std::pair{i, i + g};
          }
        }
//         std::cout << "here" << std::endl;
        
      }
      return std::pair {0, 0};
  }
  
  static bool isPrime(long long number)
  {
    for (long long j = 2; j <= number / 2; j++)
    {
//       std::cout << j << std::endl;
      if (number % j == 0)
      {
        return false;
      }
    }
    return true;
  }
};

