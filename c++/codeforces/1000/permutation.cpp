#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, counter = 0;
	cin >> n;
	int *arr = new int[n];
	//int *main = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		//main[i] = i + 1;
	}
	sort(arr, arr + n);
	for (int i = 0; i < n; i++)
	{
		//cout << "check: " << arr[i - 1];
		if ((arr[i] == arr[i - 1] && i > 0) || arr[i] > n)
		{
			counter++;
		}
	}
	cout << counter << '\n';
	return 0;
}

