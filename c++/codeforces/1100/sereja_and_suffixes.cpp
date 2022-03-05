#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n, m;
	cin >> n >> m;
	int *num = new int[n];
	int *all = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> all[i];
	}
	
	set<int> s;
	for (int i = n - 1; i >= 0; i--)
	{
		s.insert(all[i]);
		num[i] = s.size();
	}
	
	for (int i = 0; i < m; i++)
	{
		int val;
		cin >> val;
		cout << num[val - 1] << '\n';
	}
	return 0;
}

