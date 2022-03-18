#include <bits/stdc++.h>

using namespace std;

void solution(void)
{
	int n, m;
	cin >> n >> m;
	set<int> r, c;
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			int val;
			cin >> val;
			if (val == 1)
			{
				r.insert(i);
				c.insert(j);
			}
		}
	}
	int mn = min(n - r.size(), m - c.size());
	if(mn % 2)
	{
		cout << "Ashish" << endl;
	}
	else
	{
		cout << "Vivek" << endl;
	}
}

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		solution();
	}
	return 0;
}

