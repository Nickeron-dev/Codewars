typedef unsigned long long ull;
class SumFct
{
  public:
  static ull perimeter(int n)
  {
    ull all_borders = 1;
    for (ull current = 1, prev = current, i = 1; i < n + 1; i++)
    {
      all_borders += current;
      ull next = prev + current;
      prev = current;
      current = next;
    }
    
    return all_borders * 4;
  }
};


