#include <iostream>

int main()
{
	int answer = 0;
	for (int j = 1; j < 100; j++)
	{
		int num = 300 * j;
		for (int i = 1; i <= num; i++)
		{
			double res = num / 300;
			if (num % i == 0)
			{
				std::cout << i << std::endl;
				answer++;
			}
		}
		
		if (answer % 2 != 0)
		{
			std::cout << "j: " << j << std::endl;
			break;
		}
		answer = 0;
	}
	std::cout << "answer: " << answer << std::endl;
	return 0;
}

