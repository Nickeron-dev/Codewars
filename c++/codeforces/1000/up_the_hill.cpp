#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int a, b, n, counter, begin;
	cin >> a >> b;
	n = a + b + 1;
	counter = n - a;
	begin = counter;
	
	for (int i = 0; i < a + 1; i++)
	{
		cout << counter++ << " ";
	}
	for (int i = 0; i < b; i++)
	{
		cout << --begin << " ";
	}
	return 0;
}

