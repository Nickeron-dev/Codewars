#include <string>

using namespace std;

class RomanHelper{
  public:
    std::string to_roman(unsigned int n){
      std::string answer {};
      string number = to_string(n);
      if (number.size() >= 4)
      {
        
        for (int i = 1; i <= n / 1000; i++)
        {
          answer += "M";
        }
        n -= (n / 1000) * 1000;
      }
      number = to_string(n);
      if(number.size() >= 3)
      {
        if (number[0] == '9')
        {
          answer += "CM";
          n -= 900;
        }
        else if (number[0] == '8')
        {
          answer += "DCCC";
          n -= 800;
        }
        
        else if (number[0] == '7')
        {
          answer += "DCC";
          n -= 700;
        }
        else if (number[0] == '6')
        {
          answer += "DC";
          n -= 600;
        }
        else if (number[0] == '5')
        {
          answer += "D";
          n -= 500;
        }
        else if (number[0] == '4')
        {
          answer += "CD";
          n -= 400;
        }
        
        else if (number[0] == '3')
        {
          answer += "CCC";
          n -= 300;
        }
        else if (number[0] == '2')
        {
          answer += "CC";
          n -= 200;
        }
        else if (number[0] == '1')
        {
          answer += "C";
          n -= 100;
        }
      }
      number = to_string(n);
      cout << number << endl;
      if(number.size() == 2)
      {
        if (number[0] == '9')
        {
          cout << "here\n";
          answer += "XC";
          n -= 90;
        }
        else if (number[0] == '8')
        {
          answer += "LXXX";
          n -= 80;
        }
        else if (number[0] == '7')
        {
          answer += "LXX";
          n -= 70;
        }
        else if (number[0] == '6')
        {
          answer += "LX";
          n -= 60;
        }
        else if (number[0] == '5')
        {
          answer += "L";
          n -= 50;
        }
        else if (number[0] == '4')
        {
          answer += "XL";
          n -= 40;
        }
        else if (number[0] == '3')
        {
          answer += "XXX";
          n -= 30;
        }
        else if (number[0] == '2')
        {
          answer += "XX";
          n -= 20;
        }
        else if (number[0] == '1')
        {
          answer += "X";
          n -= 10;
        }
      }
      number = to_string(n);
      if (number.size() == 1)
      {
        if(number[0] == '9')
        {
          answer += "IX";
          n -= 9;
        }
        else if (number[0] == '8')
        {
          answer += "VIII";
          n -= 8;
        }
        else if (number[0] == '7')
        {
          answer += "VII";
          n -= 7;
        }
        else if (number[0] == '6')
        {
          answer += "VI";
          n -= 6;
        }
        else if (number[0] == '5')
        {
          answer += "V";
          n -= 5;
        }
        else if (number[0] == '4')
        {
          answer += "IV";
          n -= 4;
        }
        else if (number[0] == '3')
        {
          answer += "III";
          n -= 3;
        }
        else if (number[0] == '2')
        {
          answer += "II";
          n -= 2;
        }
        else if (number[0] == '1')
        {
          answer += "I";
          n -= 1;
        }
      }
      return answer;
    }
    int from_roman(std::string rn){
      vector<pair<char, int>> all;
      all.push_back(make_pair('I', 1));
      all.push_back(make_pair('V', 5));
      all.push_back(make_pair('X', 10));
      all.push_back(make_pair('L', 50));
      all.push_back(make_pair('C', 100));
      all.push_back(make_pair('D', 500));
      all.push_back(make_pair('M', 1000));
      int answer {};
      for (size_t i = 0; i < rn.size(); i++)
      {
        for (size_t j = 0; j < all.size(); j++)
        {
          if (rn[i] == all[j].first && i < rn.size() - 1 && j < all.size() - 1 && rn[i + 1] == all[j + 1].first)
          {
            cout << "res1: " << all[j + 1].second - all[j].second << '\n';
            answer += all[j + 1].second - all[j].second;
            i++;
            break;
          }
          if (rn[i] == all[j].first && i < rn.size() - 1 && j < all.size() - 2 && rn[i + 1] == all[j + 2].first)
          {
            cout << "res: " << all[j + 2].second - all[j].second << '\n';
            answer += all[j + 2].second - all[j].second;
            i++;
            break;
          }
          else if (rn[i] == all[j].first)
          {
            answer += all[j].second;
          }
        }
      }
      return answer;
    }
} RomanNumerals;
