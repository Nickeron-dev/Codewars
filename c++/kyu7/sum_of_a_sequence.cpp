int answer = 0;
bool is_first = true;

int sequenceSum(int start, int end, int step)
{
  //std::cout << "Test " << answer << std::endl;
  if (is_first)
  {
    //std::cout << "kjgkjh" << std::endl;
    is_first = false;
    answer = 0;
    answer += start;
  }
  if (start > end)
  {
    printf("here");
    //std::cout << std::endl;
    is_first = true;
    return 0;
  }
  else
  {
    is_first = false;
  }
  
  if (start < end)
  {
    //std::cout << "HEY " << answer << std::endl;
    //printf("here1");
    //std::cout << "yoy " << answer + step << std::endl;
    int give = start + step;
    //std::cout << "yoy " << give << std::endl;
    if (give > end)
    {
      //std::cout << std::endl;
      is_first = true;
      return answer;
    }
    answer += start + step;
    
    sequenceSum(give, end, step);
  }
  else
  {
    is_first = true;
    return answer;
  }
  
  if (start > end)
  {
    printf("here");
    //std::cout << std::endl;
    is_first = true;
    return 0;
  }
  else
  {
    is_first = false;
  }
  
  //std::cout << std::endl;
  is_first = true;
  return answer;
}

