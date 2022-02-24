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
	int cur_num = min;
	for (int i = 1; i < n - k + 1; i++)
	{
		
		cur_num = cur_num - arr[i - 1] + arr[i + k - 1];
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
