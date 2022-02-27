#include <iostream>
#include <string>
#include <numeric>
#include <algorithm>

using namespace std;

int main()
{
	string str;
	cin >> str;
	int *a = new int[str.size()];
	int sum = 0;
	a[0] = 0;
	for (size_t i = 1; i < str.size(); i++)
	{
		if (str[i] == str[i - 1])
		{
			sum++;
			
		}
		a[i] = sum;
		//cout << a[i] << " ";
	}
	//cout << a[str.size() - 1] << " ";
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int l, r;
		cin >> l >> r;
		//cout << "r: " << r << " l: " << l;
		//cout << "a[r - 1]: " << a[r - 1] << " a[l - 1]: " << a[l - 1] << '\n';
		cout << (a[r - 1] - a[l - 1]) << '\n';
	}
	delete [] a;
	return 0;
}
