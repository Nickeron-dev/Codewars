#include <iostream>
#include <vector>

void recursive_all_possibles(int amount, std::string &s,
        std::string &cur, std::vector<std::string> &v)
{
        if (cur.size() >= amount)
        {
                v.push_back(cur);
                return;
        }
        for (int i = 0; i < s.size(); i++)
        {
                std::string ss = cur + s[i];
                recursive_all_possibles(amount, s, ss, v);
        }
        return;
}

int main()
{
        std::string s = "abcd";
        std::vector<std::string> v;
        std::string start_str = "";
        recursive_all_possibles(3, s, start_str, v);
        for (auto e : v)
        {
                std::cout << e << '\n';
        }
        return 0;
}
