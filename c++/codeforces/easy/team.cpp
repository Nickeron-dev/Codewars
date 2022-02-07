#include <cstdio>

int main()
{
	int num;
	scanf("%i", &num);
	
	int answer {};
	for (int i = 0; i < num; i++)
	{
		int true_count = 0;
		for (int j = 0; j < 3; j++)
		{
			int current;
			scanf("%i", &current);
			if (current == 1)
			{
				true_count++;
			}
		}
		if (true_count >= 2)
		{
			answer++;
		}

	}
	printf("%i", answer);
	return 0;
}

