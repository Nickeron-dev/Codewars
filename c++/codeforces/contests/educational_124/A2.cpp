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
		int val = pow(2, n);
		cout << val - 1 << '\n';
	}
	return 0;
}

