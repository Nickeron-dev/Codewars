#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
	long long s, n, dragon_power, dragon_plus;
	cin >> s >> n;
	vector<pair<long long, long long>> v;
	for (int i = 0; i < n; i++)
	{
		cin >> dragon_power >> dragon_plus;
		v.push_back(make_pair(dragon_power, dragon_plus));
	}
	
	sort(v.begin(), v.end());
	for (auto e : v)
	{
		if (e.first < s)
		{
			s += e.second;
		}
		else
		{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "YES\n";
	return 0;
}
