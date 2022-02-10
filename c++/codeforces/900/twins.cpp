#include <cstdio>
#include <algorithm>
//#include <functional>

int main()
{
	int n;
	scanf("%i", &n);
	int coins[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%i", &coins[i]);
	}

	std::sort(coins, coins + n, std::greater<int>());

	int primary_sum = 0;
	for (int i = 0; i < n; i++)
        {
		primary_sum += coins[i];
		int current_sum {};
		for (int j = i + 1; j < n; j++)
		{
			current_sum += coins[j];
		}
                if (primary_sum > current_sum)
		{
			printf("%i\n", i + 1);
			return 0;
		}
        }

	return 0;
}

