#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int size;
		cin >> size;
		int arr[size];
		for (int j = 0; j < size; j++)
		{
			cin >> arr[j];
		}
		if (is_sorted(arr, arr + size))
		{
			cout << "NO\n";
		}
		else
		{
			cout << "YES\n";
		}
	}
	return 0;
}
