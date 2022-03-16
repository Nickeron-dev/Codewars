#include <bits/stdc++.h>

using namespace std;

int main(void)
{
	int n;
	cin >> n;
	map<int, int> money;
	money.insert(make_pair(50, 0));
	money.insert(make_pair(25, 0));
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		if (val == 100)
		{
			if (money[50] >= 1 && money[25] >= 1)
			{
				money[50] -= 1;
				money[25] -= 1;
				continue;
			}
			else if (money[25] >= 3)
			{
				money[25] -= 3;
				continue;
			}
			else
			{
				cout << "NO\n";
				return 0;
			}
		}
		else if (val == 50)
		{
			if (money[25] >= 1)
			{
				money[25] -= 1;
				money[50] += 1;
				continue;
			}
			else
			{
				cout << "NO\n";
				return 0;
			}
		}
		else
		{
			money[25] += 1;
			continue;
		}
	}
	cout << "YES\n";
	return 0;
}

