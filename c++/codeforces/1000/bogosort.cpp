#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int m = 0; m < t; m++)
	{
		//cout << "here\n";
		bool not_ready = true;
		cin >> n;
		vector<int> vec(n);
		for (int k = 0; k < n; k++)
		{
			cin >> vec[k];
		}
		if (n == 1)
		{
			cout << vec[0] << '\n';
			continue;
		}
		while (not_ready)
		{
			//cout << "here\n";
			bool ready = true;
			for (size_t i = 0; i < vec.size() - 1; i++)
			{
				for (size_t j = i + 1; j < vec.size(); j++)
				{
					if (j - vec[j] == i - vec[i])
					{
						//cout << "J: " << j << " vec[j]: " << vec[j] << " i: " << i << " vec[i]: " << vec[i] << '\n';
						swap(vec[j], vec[i]);
						ready = false;
						break;
					}
					else
					{
						ready = ready ? true : false;
						//cout << "ready: " << ready << '\n';
					}
				}
				if (ready == false)
				{
					not_ready = true;
					break;
				}
				else
				{
					not_ready = false;
				}
			}
		}
		for (size_t i = 0; i < vec.size(); i++)
		{
			cout << vec[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

