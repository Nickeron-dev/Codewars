#include <iostream>
#include <vector>

void recursive_all_possibles(int amount, std::vector<int> &s,
        std::vector<int> cur, std::vector<std::vector<int>> &v)
{
        if (cur.size() >= amount)
        {
                v.push_back(cur);
                std::vector<int> current;
                for (int i = 0; i < cur.size() - 2; i++)
                {
                        current.push_back(cur[i]);
                }
                cur = current;
                return;
        }
        for (int i = 0; i < s.size(); i++)
        {
                cur.push_back(s[i]);
                recursive_all_possibles(amount, s, cur, v);
        }
        return;
}

int main()
{
        std::vector<int> main_lst = {1, 2, 3, 4};
        std::vector<std::vector<int>> result;
        std::vector<int> start_vec;
        recursive_all_possibles(3, main_lst, start_vec, result);
        for (auto e : result)
        {
          std::cout << "{";
          for (auto e_inside : e)
          {
            std::cout << e_inside << "\n";
          }
          std::cout << "}";
        }
        return 0;
}
