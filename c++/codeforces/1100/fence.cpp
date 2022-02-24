#include <iostream>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int *arr = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
	}
	long long min = 0;
	for (int j = 0; j < k; j++)
	{
		min += arr[j];
	}
	int min_index = 0;
	for (int i = 1; i < n - k; i++)
	{
		int cur_num = 0;
		for (int j = i; j < i + k; j++)
		{
			cur_num += arr[j];
		}
		//cout << "cur_num: " << cur_num << '\n';
		if (cur_num < min)
		{
			min_index = i;
			min = cur_num;
			//cout << "cur_num chosen: " << cur_num << endl;
		}
	}
	cout << min_index + 1 << '\n';
	return 0;
}

