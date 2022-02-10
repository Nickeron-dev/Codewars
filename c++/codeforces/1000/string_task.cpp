#include <iostream>
#include <string>
#include <cctype>

int main()
{
	std::string str;
	std::cin >> str;
	std::string result = "";
	char c;
	for (std::size_t i = 0; i < str.size(); i++)
	{
		c = std::tolower(str[i]);
		if (c == 'a' || c == 'o' || c == 'y'
			|| c == 'e' || c == 'u' || c == 'i')
		{
			continue;
		}
		result += ".";
		result += c;
	}
	printf("%s\n", result.c_str());
	return 0;
}

