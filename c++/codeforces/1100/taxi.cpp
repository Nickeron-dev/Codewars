#include <iostream>
#include <cmath>

using namespace std;

int main()
{	
	int n;
	std::cin >> n;
	
	int arr[4];
	arr[0] = 0;
	arr[1] = 0;
	arr[2] = 0;
	arr[3] = 0;
	for (int i = 0; i < n; i++)
	{
		int curr_num;
		std::cin >> curr_num;
		arr[curr_num - 1] += 1;
	}
	int counter = 0;
	counter += arr[3];
	//cout << "Number of 4: " << arr[3] << endl;
	arr[3] = 0;
	int min_3_or_1 = (arr[2] > arr[0] ? arr[0] : arr[2]);
	counter += min_3_or_1;
	arr[0] -= min_3_or_1;
	arr[2] -= min_3_or_1;
	//cout << "Number of 3 by 1: " << min_3_or_1 << endl;
	counter += arr[2];
	//cout << "Number of 3: " << arr[2] << endl;
	arr[2] = 0;
	int amount_of_2_by_2 = arr[1] / 2;
	counter += amount_of_2_by_2;
	//cout << "Number of 2 by 2: " << amount_of_2_by_2 << endl;
	arr[1] = arr[1] - amount_of_2_by_2 * 2;
	if (arr[1] >= 1)
	{
		arr[1] = 1;
		if (arr[0] >= 1)
		{
			arr[1] -= 1;
			counter++;
			if (arr[0] == 1)
			{
				arr[0] -= 1;
				//cout << "2 and 1 taken: " << 1 << endl;
			}
			else 
			{
				arr[0] -= 2;
				//cout << "2 and 1 and 1 taken: " << 1 << endl;
			}
		}
	}
	counter += arr[1];
	//cout << "2 only taken: " << arr[1] << endl;
	arr[1] = 0;
	counter += std::ceil((double) arr[0] / 4);
	
	std::cout << counter << std::endl;
	return 0;
}
