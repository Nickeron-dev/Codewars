int recursive_loop(int current_value, int n)
{ 
  if (n > 1)
  {
    n /= 2;
    current_value = recursive_loop(++current_value, n);
  }
  return current_value;
}

unsigned int squaresNeeded(long long n) {
  if (n == 0)
  {
    return 0;
  }
  
  int current_value = 1;
  current_value = recursive_loop(current_value, n);
  return current_value;
}



