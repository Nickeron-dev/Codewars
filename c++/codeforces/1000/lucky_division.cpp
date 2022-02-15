#include <iostream>
#include <vector>

int main()
{
	int n;
	std::cin >> n;
	
	std::vector permutations = {4, 7, 47, 44, 74, 77, 444, 447, 477, 777, 474, 747, 744};
	
	for (std::size_t i = 0; i < permutations.size(); i++)
	{
		if (n % permutations[i] == 0)
		{
			std::cout << "YES\n";
			return 0;
		}
	}
	std::cout << "NO\n";
	return 0;
}

