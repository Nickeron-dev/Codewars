#include <iostream>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

int main()
{
	int t, n;
	cin >> t;
	for (int k = 0; k < t; k++)
	{
		cin >> n;
		map<int, int> all;
		for (int i = 0; i < n; i++)
		{
			int in;
			cin >> in;
			if (all.count(in) == 0)
			{
				all.insert(make_pair(in, 1));
			}
			else
			{
				all[in] += 1;
			}
			
		}
		int max_rep = 0;
		int distinct = 0;
		for (auto i = all.begin(); i != all.end(); i++)
		{
			if (i->second > max_rep)
			{
				max_rep = i->second;
			}
			distinct++;
		}
		//cout << max_rep << '\n';
		//cout << "dist: " << distinct << '\n';
		//cout << "answ: \n";
		cout << max(min(max_rep, distinct - 1), min(max_rep - 1, distinct)) << '\n';
	}
	return 0;
}

