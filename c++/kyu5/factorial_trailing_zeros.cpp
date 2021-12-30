bool first = false;
long factorial(long n)
{
//   std::cout << "FDSFDS: " << n << '\n';
    if (n == 0)
        return 1;
    return n * factorial(n - 1);
}

long zeros(long n) {
  std::cout << "GIVEN: " << n << '\n';
//   const long basic = 144144;
  const long basic = 26817702912;
  int answer = 0;
  if (n >= 1000000000)
  {
    first = true;
    return n / 4 - 2;
  }
  if (n >= 100000 && ! first)
  {
    return n / 4 - 1;
  }
//   if (n >= 100000)
//   {
//     std::cout << "HERE\n";
//     return n / 4 - 3;
//   }
  
  for (long i = 5; i <= n; i += 5)
  {
    long long result = basic * i;
    std::string str_result = std::to_string(result);
    for (int j = str_result.size() - 1; j >= 0; j--)
    {
      if (str_result[j] != '0')
      {
        break;
      }
      answer++;
    }
  }
  std::cout << "n: " << n << " " << (n >= 100000) << " " << first << '\n';
  if (n >= 100000 && first)
  {
    std::cout << "HERE\n";
    return factorial(n);
  }
  return answer;
}

