#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	int n, l = 0, r = 0, u = 0, d = 0;
	cin >> n;
	string str;
	cin >> str;
	for (size_t i = 0; i < str.size(); i++)
	{
		if (str[i] == 'L')
		{
			l++;
		}
		else if (str[i] == 'R')
		{
			r++;
		}
		else if (str[i] == 'U')
		{
			u++;
		}
		else if (str[i] == 'D')
		{
			d++;
		}
	}
	int answer = min(l, r) * 2 + min(u, d) * 2;
	cout << answer << '\n';
	
	return 0;
}

