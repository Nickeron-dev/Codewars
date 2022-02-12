#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int x[n];
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	int q;
	cin >> q;
	int set_of_money[q];
	for (int i = 0; i < q; i++)
	{
		cin >> set_of_money[i];
	}
	std::sort(x, x + n);
	
	int answer;
	for (int i = 0; i < q; i++)
	{
		answer = std::upper_bound(x, x + n, set_of_money[i]) - x;
		// so from int * that points to a certain element of array, minus
		// pointer to the first element, since each pointer is 4 bytes further,
		// the difference between fourth element(index 3) and first, will be 4
		cout << answer << '\n';
	}
	return 0;
}
