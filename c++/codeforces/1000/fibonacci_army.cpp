#include <iostream>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int prev = 0;
	int cur = 1;
	for (int i = 0; i < n; i++)
	{
		int temp = cur;
		cur = cur + prev;
		prev = temp;
		
	}
	cout << cur << '\n';
	return 0;
}

