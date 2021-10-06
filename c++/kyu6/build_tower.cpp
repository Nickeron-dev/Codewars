#include <iostream>

class Kata
{
public:
    std::vector<std::string> towerBuilder(int nFloors)
    {
        std::vector<std::string> answer;
        std::string lowest_line = "*";
        if (nFloors == 1) {
          answer.push_back("*");
          return answer;
        }
      
        for (int i = nFloors - 1; i > 0; i--) {
            answer.push_back("");
            lowest_line += "**";
        }
        
        answer.push_back(lowest_line);
        int count = 0;
        for (int i = nFloors - 2; i >= 0; i--, count++) {
            answer.at(i) = answer.at(i + 1);
            answer.at(i).replace(0 + count, 1, " ");
            answer.at(i).replace(answer.at(i).size() - (count + 1), 1, " "); 
        }
      
        return answer;
    }
};

