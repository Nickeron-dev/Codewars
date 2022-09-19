#include <iostream>

int main() {
  int n, a, b, c;

  std::cin >> n >> a >> b >> c;

  if (n == 1) {
    std::cout << 0 << std::endl;
    return 0;
  }
  
  std::cout << std::min(a, b) + (std::min(std::min(a, b), c) * (n - 2)) << std::endl;
  return 0;
}