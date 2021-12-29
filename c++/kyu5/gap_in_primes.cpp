// Second Solution is better because it is more optimized
class GapInPrimes
{
public:
//     static std::pair<long long, long long> gap(int g, long long m, long long n) {
//       bool isContinue = true;
//       for (long long i = m; i <= n; i++)
//       {
//         if (i + g <= n && isPrime(i) && isPrime(i + g))
//         {
          
//           isContinue = true;
//           for (long long j = i + 1; j < i + g; j++)
//           {
//             if (isPrime(j)) isContinue = false;
//           }
//           if (isContinue)
//           {
//             return std::pair{i, i + g};
//           }
//         }
// //         std::cout << "here" << std::endl;
        
//       }
//       return std::pair {0, 0};
//   }
  
//   static bool isPrime(long long number)
//   {
//     for (long long j = 2; j <= number / 2; j++)
//     {
// //       std::cout << j << std::endl;
//       if (number % j == 0)
//       {
//         return false;
//       }
//     }
//     return true;
//   }

// Here is second solution  
  static std::pair<long long, long long> gap(int g, long long m, long long n)
  {
    bool isContinue = true;
    //check each second number
    for (long long i = m % 2 == 0 ? m + 1 : m; i <= n; i += 2)
    {
      if (i + g <= n && isPrime_2(i, i + g))
      {

        isContinue = true;
        for (long long j = (i + 1) % 2 == 0 ? (i + 1 + 1) : (i + 1); j < i + g; j += 2)
        {
          if (isPrime(j)) isContinue = false;
        }
        if (isContinue)
        {
          return std::pair{i, i + g};
        }
      } 
    }
    return std::pair {0, 0};
  }
  
  static bool isPrime(long long number)
  {
    for (long long j = 2; j <= number / 2; j++)
    {
      if (number % j == 0)
      {
        return false;
      }
    }
    return true;
  }
  
  static bool isPrime_2(long long number, long long number_2)
  {
    int max = number > number_2 ? number : number_2;
    for (long long j = 2; j <= max / 2; j++)
    {
      if (number % j == 0 || number_2 % j == 0)
      {
        return false;
      }
    }
    return true;
  }
  
  
};

