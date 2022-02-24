#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	for (int i = 0; i < t; i++)
	{
		int degree;
		cin >> degree;
		double amount_of_angles = (double) -360 / (degree - 180);
		//cout << amount_of_angles << endl;
		if (ceil(amount_of_angles) == floor(amount_of_angles))
		{
			cout << "YES\n";
		}
		else 
		{
			cout << "NO\n";
		}
	}
	return 0;
}

