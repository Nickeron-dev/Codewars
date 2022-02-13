#include <iostream>
#include <string>

using namespace std;

int main()
{
	string hello = "hello";
	string str;
	cin >> str;
	int ended = 0;
	bool found = false;
	for (size_t j = 0; j < hello.size(); j++)
	{
		for (size_t i = ended; i < str.size(); i++)
		{
			//cout << "going: " << str[i] << '\n';
			if (str[i] == hello[j])
			{
				ended = i + 1;
				found = true;
				break;
			}
		}
		if ( ! found)
		{
			cout << "NO" << endl;
			return 0;
		}
		found = false;
	}
	cout << "YES" << endl;
	return 0;
}
