#include <iostream>

int main()
{
	int n, a, b;
	std::cin >> n >> a >> b;
	
	std::cout << ((n - a > b + 1) ? b + 1 : n - a) << std::endl;
	return 0;
}

