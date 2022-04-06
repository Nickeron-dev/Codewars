#include <bits/stdc++.h>

using namespace std;

void solution(void)
{
	int n, m;
	cin >> n >> m;
	int val;
	int amount = 0;
	for (int i = n * m; i > 0; i--)
	{
		cin >> val;
		if (val == 0)
		{
			amount++;
		}
	}
	
	if (amount % 2)
	{
		cout << "Vivec\n";
	}
	else
	{
		cout << "Ashish\n";
	}
}

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		solution();
	}
	return 0;
}

