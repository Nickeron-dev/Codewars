#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int main()
{
	int t;
	cin >> t;
	for (int m = 0; m < t; m++)
	{
		int n;
		cin >> n;
		int val = pow(2, n);
		map<int, int> all;
		for (int i = 1; i <= val; i += 2)
		{
			all.insert(make_pair(i, i + 1));
		}
		
		for (auto i = all.begin(); i != all.end(); i++)
		{
			cout << i->first << " " << i->second << '\n';
		}
		
		while (all.size() != 1)
		{
			map<int, int> final_all;
			for (auto i = all.begin(); i != all.end(); i++)
			{
				cout << i->first << " " << i->second << '\n';
				int a1 = i->first;
				int a2 = i->second;
				int res1;
				if ((a1 + a2) % 2)
				{
					res1 = a1 > a2 ? a2 : a1;
				}
				else
				{
					res1 = a1 > a2 ? a1 : a2;
				}
				//all.erase(i->first);
				i++;
				cout << "second: " << i->first << " " << i->second << '\n';
				int b1 = i->first;
				int b2 = i->second;
				int res2;
				if ((b1 + b2) % 2)
				{
					res2 = b1 > b2 ? b2 : b1;
				}
				else
				{
					res2 = b1 > b2 ? b1 : b2;
				}
				
				//all.erase(i->first);
				final_all.insert(make_pair(res1, res2));
			}
			all.clear();
			all = final_all;
			cout << "Standings: \n";
			 for (auto i = all.begin(); i != all.end(); i++)
			{
				cout << i->first << " " << i->second << '\n';
			}
			cout << endl;
		}
		auto last = all.begin();
		cout << "last: " << last->first << " " << last->second << '\n';
		int a1 = last->first;
		int a2 = last->second;
		int answer;
		if ((a1 + a2) % 2)
		{
			answer = a1 > a2 ? a2 : a1;
		}
		else
		{
			answer = a1 > a2 ? a1 : a2;
		}
		cout << answer << '\n';
	}
	return 0;
}

