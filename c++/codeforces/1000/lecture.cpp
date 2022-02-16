#include <iostream>
#include <string>

int main()
{
	int n, m;
	std::cin >> n >> m;
	
	std::string arr[m][2];
	for (int i = 0; i < m; i++)
	{
		std::cin >> arr[i][0] >> arr[i][1];
	}
	
	std::string word {};
	for (int i = 0; i < n; i++)
	{
		std::cin >> word;
		for (int j = 0; j < m; j++)
		{
			if (arr[j][0] == word || arr[j][1] == word)
			{
				std::cout << (arr[j][0].size() <= arr[j][1].size() ? arr[j][0] : arr[j][1]) << " ";
				break;
			}
		}
	}
	return 0;
}

