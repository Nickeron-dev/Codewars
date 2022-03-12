#include <iostream>

int main()
{
	int a, b, n, m;
	std::cin >> a >> b >> n >> m;	
	std::cout << (((a * n + b * m) > (a * m + b * n)) ? 1 : 2) << std::endl;
	return 0;
}

