#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int v = 0; v < t; v++)
	{
		int n;
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; i++)
		{
			int val;
			cin >> val;
			vec.push_back(val);
		}
		int answer = 0;
		for (int i = 0; i < vec.size(); i++)
		{
			answer = answer | vec[i];
		}
		cout << answer << endl;
	}
	
	
	return 0;
}

