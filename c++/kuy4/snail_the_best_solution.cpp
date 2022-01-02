#include <vector>
#include <set>

std::vector<int> snail(const std::vector<std::vector<int>> &snail_map) {
  std::vector<int> result;
  int index_x {};
  int index_y {};
  int right_bound_index = snail_map.size() - 1;
  int left_bound_index = 0;
  int down_bound_index = snail_map.size() - 1;
  int up_bound_index = 0;
  if (snail_map[0].size() == 0)
  {
    return std::vector<int> {};
  }
  std::string action = "right";
  if (snail_map.size() != 0)
  {
    result.push_back(snail_map[index_x][index_y]);
  }
  while (result.size() != snail_map.size() * snail_map.size())
  {
    if (action == "right")
    {
      index_y++;
      if (index_y != snail_map[index_x].size() && index_y <= right_bound_index)
      {
        result.push_back(snail_map[index_x][index_y]);
      }
      else
      {
        up_bound_index++;
        index_y--;
        action = "down";
      }
    }
    else if (action == "down")
    {
      index_x++;
      if (index_x != snail_map.size() && index_x <= down_bound_index)
      {
        result.push_back(snail_map[index_x][index_y]);
      }
      else
      {
        right_bound_index--;
        index_x--;
        action = "left";
      }
    }
    else if (action == "left")
      {
        index_y--;
        if (index_y != -1 && index_y >= left_bound_index)
        {
          result.push_back(snail_map[index_x][index_y]);
        }
        else
        {
          down_bound_index--;
          index_y++;
          action = "up";
        }
      }
    else if (action == "up")
      {
        index_x--;
        if (index_x != -1 && index_x >= up_bound_index)
        {
          result.push_back(snail_map[index_x][index_y]);
        }
        else
        {
          left_bound_index++;
          index_x++;
          action = "right";
        }
      }
  }
  std::cout << "fdsfsdjfdslkfjdslkjfdslkfjsdf" << std::endl;
  return result;
}

