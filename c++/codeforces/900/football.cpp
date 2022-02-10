#include <iostream>

int main()
{
	char value {};
	int row_count {};
	std::string str;
	std::cin >> str;
	char temp;
	for (int i = 0; i < str.size(); i++)
	{
		temp = str[i];
		if (temp == value)
		{
			value = temp;
			row_count++;
		}
		else
		{
			value = temp;
			row_count = 1;
		}
		if (row_count >= 7)
		{
			printf("YES");
			return 0;
		}
	}

	printf("NO");
	return 0;
}

