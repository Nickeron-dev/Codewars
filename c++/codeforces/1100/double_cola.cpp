#include <bits/stdc++.h>

using namespace std;

int main()
{
	long long n;
	cin >> n;
	std::string arr[] = {"Sheldon", "Leonard", "Penny", "Rajesh", "Howard"};
	if (n <= 5)
	{
		cout << arr[n - 1] << endl;
		return EXIT_SUCCESS;
	}
	
	int count = 1;
	long long value = 5;
	while (value < n)
	{
		n -= value;
		value *= 2;
		count *= 2;
		//cout << "value: " << value << '\n';
		//cout << "count: " << count << '\n';
		//cout << "n: " << n << '\n';
	}
	//cout << "val: " << (n / count) << endl;
	cout << arr[n / count] << endl;
	return EXIT_SUCCESS;
}

