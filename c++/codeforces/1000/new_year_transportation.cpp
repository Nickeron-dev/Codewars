#include <iostream>

int main()
{
	int n, t;
	std::cin >> n >> t;
	n -= 1;
	int arr[n];
	t--;
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[i];
	}
	
	
	long long current = 0;

	for (int i = 0; i < n; i++)
	{
		if (current == t)
		{
			std::cout << "YES\n";
			return 0;
		}
		else if (current > n)
		{
			std::cout << "NO\n";
			return 0;
		}
		
		current = current + arr[current];
	}
	std::cout << "NO\n";
	return 0;
}
