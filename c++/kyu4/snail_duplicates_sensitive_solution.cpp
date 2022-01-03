#include <vector>
#include <set>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  std::set<int> all_values;
  std::vector<int> result;
  int index_x {};
  int index_y {};
  if (snail_map[0].size() == 0)
  {
    return std::vector<int> {};
  }
  std::string action = "right";
  if (snail_map.size() != 0)
  {
    all_values.insert(snail_map[index_x][index_y]);
    result.push_back(snail_map[index_x][index_y]);
  }
  for (int i = 0; i <= snail_map.size() * snail_map.size(); i++)
  {
    if (action == "right")
    {
      std::cout << "right\n";
      index_y++;
      if (index_y != snail_map[index_x].size() && all_values.count(snail_map[index_x][index_y]) <= 0)
      {
        all_values.insert(snail_map[index_x][index_y]);
        result.push_back(snail_map[index_x][index_y]);
      }
      else
      {
        i--;
        index_y--;
        action = "down";
      }
    }
    else if (action == "down")
    {
      std::cout << "down\n";
      index_x++;
      if (index_x != snail_map.size() && all_values.count(snail_map[index_x][index_y]) <= 0)
      {
        all_values.insert(snail_map[index_x][index_y]);
        result.push_back(snail_map[index_x][index_y]);
      }
      else
      {
        index_x--;
        i--;
        action = "left";
      }
    }
    else if (action == "left")
      {
        std::cout << "left\n";
        index_y--;
        if (index_y != -1 && all_values.count(snail_map[index_x][index_y]) <= 0)
        {
          all_values.insert(snail_map[index_x][index_y]);
          result.push_back(snail_map[index_x][index_y]);
        }
        else
        {
          i--;
          index_y++;
          action = "up";
        }
      }
    else if (action == "up")
      {
        std::cout << "up\n";
        index_x--;
        if (index_x != -1 && all_values.count(snail_map[index_x][index_y]) <= 0)
        {
          all_values.insert(snail_map[index_x][index_y]);
          result.push_back(snail_map[index_x][index_y]);
        }
        else
        {
//           i--;
          index_x++;
          action = "right";
        }
      }
  }
  for (int i = 0; i < snail_map.size(); i++)
  {
    for (int j = 0; j < snail_map[i].size(); j++)
    {
      std::cout << snail_map[i][j] << " ";
    }
    std::cout << '\n';
  }
//   std::cout << "array\n";
//   for (auto e : result)
//   {
//     std::cout << e << " ";
//   }
  std::cout << "fdsfsdjfdslkfjdslkjfdslkfjsdf" << std::endl;
  return result;
}

