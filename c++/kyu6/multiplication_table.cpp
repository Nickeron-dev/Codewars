#include <vector>

std::vector<std::vector<int>> multiplication_table(int n){
  std::vector<std::vector<int>> result(n, std::vector<int> (n, 0));
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      result[i][j] = (j + 1) * (i + 1);
    }
  }
  return result;
}

