#include <string>
#include <vector>
#include <set>

void permute(std::set<std::string> &target, std::string a, int l, int r);

std::vector<std::string> permutations(std::string s) {
  if (s.size() == 0)
  {
    return std::vector<std::string> {""};
  }
  std::set<std::string> set_answer;
  permute(set_answer, s, 0, s.size() - 1);
  std::vector<std::string> vector_answer;
  for (auto i = set_answer.begin(); i != set_answer.end(); i++)
  {
    if ((*i).size() == s.size())
    {
      std::cout << *i << " ";
      vector_answer.push_back(*i);
    }
  }
  return vector_answer;
}

void permute(std::set<std::string> &target, std::string a, int l, int r)
{
    if (l == r)
    {
      target.insert(a);
    }
        
    else
    {
        for (int i = l; i <= r; i++)
        {
            std::swap(a[l], a[i]);
 
            permute(target, a, l+1, r);
 
            std::swap(a[l], a[i]);
        }
    }
}

