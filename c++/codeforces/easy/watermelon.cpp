#include <iostream>

int main()
{
	int given_number;
	std::cin >> given_number;

	if (given_number & 1 || given_number <= 2)
	{
		printf("NO");
	}
	else
	{
		printf("YES");
	}
	
	return 0;
}

