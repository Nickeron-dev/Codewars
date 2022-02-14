#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t, n, val;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		cin >> n;
		int arr[n];
		for (int j = 0; j < n; j++)
		{
			cin >> arr[j];
		}
		for (int j = 0; j < n - 1; j++)
		{
			cout << "SS: " << arr[j] + arr[j + 1] << endl;
			if (arr[j] + arr[j + 1] % 2 != 0 && arr[j] > arr[j + 1])
			{
				swap(arr[j], arr[j + 1]);
			}
		}
		if (is_sorted(arr, arr + n))
		{
			cout << "arr:\n";
			for (int m = 0; m < n; m++)
			{
				cout << arr[m] << endl;
			}
			cout << "Yes\n";
		}
		else
		{
			cout << "arr:\n";
			for (int m = 0; m < n; m++)
			{
				cout << arr[m] << endl;
			}
			cout << "No\n";
		}
		
	}
	return 0;
}
