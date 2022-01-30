#include <iostream>
#include <math.h>

int main()
{
	int x, y;
	for (int x = 1; x <= 100; x++)
	{
		for (int y = 1; y <= 100; y++)
		{
			int value_1 = x * x + 8 * y;
			int root_1 = sqrt(value_1);
			int value_2 = y * y + 8 * x;
                        int root_2 = sqrt(value_2);
			if (root_1 * root_1 == value_1 && root_2 * root_2 == value_2)
			{
				std::cout << "value_1: " << value_1 << std::endl;
				std::cout << "value_2: " << value_2 << std::endl;
				std::cout << "root_1: " << root_1 << std::endl;
				std::cout << "root_2: " << root_2 << std::endl;
				std::cout << "ROOOOOOOOOOT!!! " << x << " " << y << "\n";
			}
		}

	}	
	return 0;
}

