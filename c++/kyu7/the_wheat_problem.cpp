int recursive_loop(int value)
{
  return value * 2;
}

unsigned int squaresNeeded(long long n) {
  if (n == 0)
  {
    return 0;
  }
  
  int current_value = 1;
  //int func_value = recursive_loop(current_value);
  if (current_value <= n)
  {
    current_value = recursive_loop(current_value);
  }
  else
  {
    return current_value;
  }
  return current_value;
}


