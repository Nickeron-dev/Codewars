#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int m = 0; m < t; m++)
	{
		int n;
		cin >> n;
		vector<int> vec;
		for (int i = 0; i < n; i++)
		{
			int val;
			cin >> val;
			vec.push_back(val);
		}
		
		if (vec.size() < 3)
		{
			cout << 0 << '\n';
			for (int i = 0; i < vec.size(); i++)
			{
				cout << vec[i] << " ";
			}
		}
		else
		{
			int counter = 0;
			for (int i = 1; i < vec.size() - 1; i++)
			{
				if (vec[i] > vec[i - 1] && vec[i] > vec[i + 1])
				{
					if (i + 2 < vec.size())
					{
						vec[i + 1] = max(vec[i + 1], vec[i + 2]);
					}
					else
					{
						vec[i + 1] = vec[i + 1];
					}
					counter++;
				}
			}
			cout << counter << '\n';
			for (int i = 0; i < vec.size(); i++)
			{
				cout << vec[i] << " ";
			}
			cout << endl;
		}
	}
	return 0;
}
