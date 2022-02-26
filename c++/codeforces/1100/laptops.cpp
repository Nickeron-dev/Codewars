#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	map<int, int> f;
	map<int, int> s;
	for (int i = 0; i < n; i++)
	{
		int v1, v2;
		cin >> v1 >> v2;
		f[v1] = v2;
		s[v2] = v1;
	}
	auto it1 = f.begin();
	auto it2 = s.begin();
	while (it1 != f.end())
	{
		//cout << "f: " << it1->first << " " << it1->second << '\n';
		//cout << "s: " << it2->first << " " << it2->second << '\n';
		if (it1->first != it2->second && it1->second != it2->first)
		{
			cout << "Happy Alex\n";
			return 0;
		}
		it1++;
		it2++;
	}
	cout << "Poor Alex\n";
	return 0;
}

