#include <iostream>
using namespace std;

class Solution {
  public:
  int sum_rec(int i, std::string s)
  {
      if (i < s.size())
      {
          return sum_rec(i + 1, s) + s[i] - 48;
      }
      return 0;
  }
  std::string recursion(int i, std::string &s)
    {
        if (i < s.size())
        {
            return ((recursion(i + 1, s) + s[i]));
        }
        return "";
    }
    int isDigitSumPalindrome(int n) {
        std::string s = std::to_string(n);
        std::string sum_el = std::to_string(sum_rec(0, s));
        std::string reversed = recursion(0, sum_el);
        return sum_el == reversed ? 1 : 0;
    }
};

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isDigitSumPalindrome(N) << "\n";
    }
}

