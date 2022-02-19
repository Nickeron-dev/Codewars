#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	vector<int> arr;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		arr.push_back(val);
	}
	sort(arr.begin(), arr.end());
	int max, amount = 0;
	for (int i = 0; i < arr.size(); i++)
	{
		int last = upper_bound(arr.begin(), arr.end(), arr[i]) - arr.begin() - 1;
		//cout << "last: " << last << '\n';
		max = last - i + 1 > max ? last - i + 1 : max;
		amount++;
		i = last;
	}
	cout << max << " " << amount << '\n';
	return 0;
}

