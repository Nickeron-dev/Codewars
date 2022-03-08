#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int m = 0; m < t; m++)
	{
		bool is_done = false;
		string str;
		cin >> str;
		char letter;
		cin >> letter;
		for (size_t i = 0; i < str.size(); i++)
		{
			if (str[i] == letter)
			{
				if (i % 2 == 0 && (str.size() - i - 1) % 2 == 0)
				{
					cout << "YES\n";
					is_done = true;
					break;
				}
			}
		}
		if ( ! is_done)
		{
			cout << "NO\n";
		}
		
	}
	return 0;
}
