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
		vector<int> v;
		long long val = 1;
		v.push_back(val);
		bool is_no = false;
		for (int i = 1; i < n; i++)
		{
			if (val * 3 > 1000000000)
			{
				cout << "NO\n";
				is_no = true;
				break;
			}
			v.push_back(val * 3);
			val *= 3;
		}
		if ( ! is_no)
		{
			cout << "YES\n";
			for (size_t i = 0; i < v.size(); i++)
			{
				cout << v[i] << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}

