long recursive(long n, long sum)
{
  n /= 5;
  sum += n;
  if (n < 5)
  {
    return sum;
  }
  sum = recursive(n, sum);
  return sum;
}

long zeros(long n) {
  long result = (long) recursive(n, 0);
  return result;
}

