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
		long long prev = 1;
		long long count = 1;
		bool is_no = false;
		v.push_back(count);
		for (int i = 1; i < n; i++)
		{
			long long stored = count;
			prev = count;
			while ((count - prev) * 2 < count + prev)
			{
				if (count > 1000000000)
				{
					cout << "NO\n";
					is_no = true;
					break;
				}
				count++;
			}
			if (is_no)
			{
				break;
			}
			v.push_back(count);
			//prev = stored;
			//cout << "count: " <<  count << "\n";
			//cout << "prev: " << prev << '\n';
		} 
		if (is_no)
		{
			break;
		}
		cout << "YES\n";
		for (size_t i = 0; i < v.size(); i++)
		{
			cout << v[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}

