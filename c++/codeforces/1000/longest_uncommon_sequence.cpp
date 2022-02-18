#include <iostream>
#include <string>

using namespace std;

int main()
{
	string a, b;
	cin >> a >> b;
	if (a == b)
	{
		cout << -1 << '\n';
		return 0;
	}
	if (a.size() > b.size())
	{
		cout << a.size() << endl;
		return 0;
	}
	else if (a.size() < b.size())
	{
		cout << b.size() << endl;
		return 0;
	}
	
	cout << a.size() << '\n';
	return 0;
}

