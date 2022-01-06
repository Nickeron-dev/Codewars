#include <vector>

class DoubleLinear
{
public:
    static int dblLinear(int n)
    {
      int current_x {};
      int current_y {};
      std::vector<int> sequence {1};
      for (int i = 0; i <= n; i++)
      {
        int a = (sequence[current_x] * 2) + 1;
        int b = (sequence[current_y] * 3) + 1;
        if (a > b)
        {
          sequence.push_back(b);
          current_y += 1;
        }
        else if (b > a)
        {
          sequence.push_back(a);
          current_x += 1;
        }
        else
        {
          sequence.push_back(a);
          current_x += 1;
          current_y += 1;
        }
      }
      return sequence[n];
    }
};


