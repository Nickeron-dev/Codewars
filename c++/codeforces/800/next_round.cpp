#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
	int n, k;
	cin >> n >> k;
	int *a = new int[n];
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}
	
	if (n == k)
	{
		int answer = 0;
		for (int i = 0; i < n; i++)
		{
			if(a[i] > 0)
			{
				answer++;
			}
		}
		cout << answer << endl;
		return 0;
	}
	
	int answer = 0;
	for (int i = 0; i < n; i++)
	{
		if(a[i] >= a[k - 1] && a[i] > 0)
		{
			answer++;
		}
	}
	
	cout << answer << endl;
	delete [] a;
	return 0;
}
