#include <iostream>
#include <cmath>

int main()
{
	int n;
	std::cin >> n;
	
	if (n == 0)
	{
		std::cout << 1 << std::endl;
		return 0;
	}
	
	if (n % 4 == 0)
	{
		std::cout << 6 << std::endl;
	}
	else if (n % 4 == 1)
	{
		std::cout << 8 << std::endl;
	}
	else if (n % 4 == 2)
	{
		std::cout << 4 << std::endl;
	}
	else if (n % 4 == 3)
	{
		std::cout << 2 << std::endl;
	}
	return 0;
}

