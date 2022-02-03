#include <iostream>
#include <vector>

std::vector<std::vector<int>> result;
std::vector<int> given = {1, 2, 3, 4};
std::vector<int> current_permutations; // empty at the beginning
int amount = 3; // amount of characters in 1 permutation

void recursive_all_possibles(std::vector<int> cur)
{
        if (cur.size() >= amount)
        {
                result.push_back(cur);
                return;
        }
        for (int i = 0; i < given.size(); i++)
        {
                std::vector<int> current(cur.size() + 1);
                for(int j = 0; j < cur.size(); j++)
                {
                        current[j] = cur[j];
                }
                current[current.size() - 1] = given[i];
                recursive_all_possibles(current);
        }
        return;
}

int main()
{
        recursive_all_possibles(current_permutations);
        for (int i = 0; i < result.size(); i++)
        {
          std::cout << "{";
          for (int j = 0; j < result[i].size(); j++)
          {
            std::cout << result[i][j];
          }
          std::cout << "}\n";
        }
        return 0;
}
