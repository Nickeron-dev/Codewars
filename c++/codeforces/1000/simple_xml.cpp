#include <bits/stdc++.h>

using namespace std;

int main()
{
	string s;
	cin >> s;
	int spaces = 0;
	bool new_line = false;
	for (size_t i = 0; i < s.size(); i++)
	{
		if (s[i] == '<' && s[i + 1] == '/')
		{
			new_line = false;
			for (int j = 0; j < spaces - 2; j++)
			{
				cout << ' ';
			}
			
		}
		else if (s[i] == '<' || new_line)
		{
			new_line = false;
			for (int j = 0; j < spaces; j++)
			{
				cout << ' ';
			}
			
		}
		cout << s[i];
		if (s[i] == '>' && s[i - 2] == '/')
		{
			if (s[i] == '>')
			{
				spaces -= 2;
			}
			cout << '\n';
			new_line = true;
		}
		else if (s[i] == '>' || s[i + 1] == '<')
		{
			if (s[i] == '>')
			{
				spaces += 2;
			}
			//spaces += 2;
			cout << '\n';
			new_line = true;
		}
	}
	return 0;
}

