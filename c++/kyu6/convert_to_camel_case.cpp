#include <iostream>
#include <string>

std::string to_camel_case(std::string text);

int main()
{
    if (to_camel_case("the_stealth_warrior") == "theStealthWarrior")
    {
        std::cout << "Good!" << std::endl;
    }
    return 0;
}

std::string to_camel_case(std::string text) {
  for (int i = 0; i < (int)text.size(); i++) {
    if (text[i] == '-' || text[i] == '_') {
      text.erase(i, 1);
      text[i] = std::toupper(text[i]);
    }
  }
  return text;
}
