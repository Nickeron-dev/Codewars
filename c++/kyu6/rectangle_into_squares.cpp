#include <vector>

class SqInRect
{
  public:
  static std::vector<int> sqInRect(int lng, int wdth)
  {
    std::vector<int> answer;
    if (lng == wdth)
    {
      return answer;
    }
    
    while (wdth != 0 && lng != 0)
    {
      int min = lng < wdth ? lng : wdth;
      answer.push_back(min);
      bool isLng = min == lng ? true : false;
      if (isLng) 
      {
        wdth -= lng;
      }
      else 
      {
        lng -= wdth;
      }
    }
    return answer;
  }
};

