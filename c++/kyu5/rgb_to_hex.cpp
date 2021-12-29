class RGBToHex
{
  public:
  static std::string rgb(int r, int g, int b)
  {
    std::string hex_answer = "";
    
    int arr_size = 3;
    int arr[arr_size];
    arr[0] = r;
    arr[1] = g;
    arr[2] = b;
    for (int i = 0; i < arr_size; i++)
    {
      if (arr[i] > 255)
      {
        arr[i] = 255;
      }
      else if (arr[i] < 0)
      {
        arr[i] = 0;
      }
      std::stringstream ss;
      ss << std::hex << arr[i];
      if (ss.str().size() == 1)
      {
        hex_answer += "0" + ss.str();
      }
      else
      {
        hex_answer += ss.str();
      }
      
    }
    
    for (int i = 0; i < hex_answer.size(); i++)
    {
      hex_answer[i] = std::toupper(hex_answer[i]);
    }
    return hex_answer;
  }
};

