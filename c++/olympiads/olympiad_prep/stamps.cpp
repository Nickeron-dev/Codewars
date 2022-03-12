#include <iostream>
#include <vector>
#include <map>

int main()
{
	int n;
	std::cin >> n;
	vector<int> arr(n);
	for (int i = 0; i < n; i++)
	{
		std::cin >> arr[n]
	}

	map<int, int> differences;
	for (int i = 0; i < n; i++)
	{
        for(int j = 1; j < n; j++)
        {
            differences.insert(std::pair<int, int>(arr[i] - arr[j], arr[i]));
        }
	}

    for (int i = 0; i < differences.size(); i++)
    {
        for (int j = 0; j < differences.size(); j++)
        {
            if (differences[i])
        }
    }

	return 0;
}

