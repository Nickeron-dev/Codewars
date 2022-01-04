#include <set>
#include <vector>

bool validSolution(unsigned int board[9][9]){
  std::vector<std::set<unsigned int>> block_values(9);
  for (int i = 0; i < 9; i++)
  {
    std::set<unsigned int> values;
    std::set<unsigned int> y_values;
    int counter = i < 6 ? 2 : 4;
    for (int j = 0; j < 9; j++)
    {
      int index = i >= 3 ? (i / 3 + j / 3) + counter : (i / 3 + j / 3);
      block_values[index].insert(board[i][j]);
      if (board[i][j] > 9 || board[i][j] < 1)
      {
        return false;
      }
      if (values.count(board[i][j]) <= 0)
      {
        values.insert(board[i][j]);
      }
      else
      {
        return false;
      }
      if (board[j][i] > 9 || board[j][i] < 1)
      {
        return false;
      }
      if (y_values.count(board[j][i]) <= 0)
      {
        y_values.insert(board[j][i]);
      }
      else
      {
        return false;
      }
    }
  }
  
  for (int i = 0; i < block_values.size(); i++)
  {
    if (block_values[i].size() != 9)
    {
      return false;
    }
  }
  return true;
}

