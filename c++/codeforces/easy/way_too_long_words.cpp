#include <iostream>
#include <string>

int main()
{
	int number;
	std::cin >> number;

	for (int i = 0; i < number; i++)
	{
		std::string str;
		std::cin >> str;
		if (str.size() > 10)
		{
			std::cout << str[0] << str.size() - 2 << str[str.size() - 1] << '\n';
		}
		else
		{
			printf("%s\n", str.c_str());
		}
	}
	return 0;
}

