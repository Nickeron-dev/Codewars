class DirReduction
{
public:
    static std::vector<std::string> dirReduc(std::vector<std::string> &arr)
    {
      bool isContinue = true;
      int size = arr.size();
      while (isContinue)
      {
        
        for (int i = 1; i < size; i++)
        {
          if ((arr[i] == "WEST" && arr[i - 1] == "EAST" )
              || (arr[i] == "EAST" && arr[i - 1] == "WEST"))
          {
            arr.erase(arr.begin() + i - 1);
            arr.erase(arr.begin() + i - 1);
            size -= 2;
          }
          if ((arr[i] == "SOUTH" && arr[i - 1] == "NORTH") 
              || (arr[i] == "NORTH" && arr[i - 1] == "SOUTH"))
          {
            arr.erase(arr.begin() + i - 1);
            arr.erase(arr.begin() + i - 1);
            size -= 2;
          }
        }
        isContinue = false;
        for (int i = 1; i < size; i++)
        {
          if ((arr[i] == "WEST" && arr[i - 1] == "EAST" )
              || (arr[i] == "EAST" && arr[i - 1] == "WEST"))
          {
            isContinue = true;
          }
          if ((arr[i] == "SOUTH" && arr[i - 1] == "NORTH") 
              || (arr[i] == "NORTH" && arr[i - 1] == "SOUTH"))
          {
            isContinue = true;
          }
        }
      }
      
      
      return arr;
    }
};

