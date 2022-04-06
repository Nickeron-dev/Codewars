#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int number);
int gcd(int a, int b); // greatest common divisor
int lcm(int a, int b); // least common multiple

int main(void)
{
	int t;
	cin >> t;
	for (int r = 1; r <= t; r++)
	{
		string n;
		cin >> n;
		ll sum = 0;
		int v;
		for (int i = 0; i < n.size(); i++)
		{
			v = 0;
			v += n[i] - 48;
			sum += v;
		}
		//cout << "sum: " << sum << '\n';
		if (n[0] - 48 < (9 - sum % 9))
		{
			if (9 - sum % 9 == 9)
			{
				n = n[0] + to_string(0) + n.substr(1, n.size());
			}
			else
			{
				//cout << "here\n";
				int number = 9 - sum % 9;
				int iter = 0;
				//int vall = n[iter] - 48;
				//cout << vall << '\n';
				while (iter < n.size() && number >= n[iter] - 48)
				{
					//cout << "n: " << number << " less: " << n[iter] << '\n';
					iter++;
				}
				n = n.substr(0, iter) + to_string(9 - sum % 9) + (iter + 1 < n.size() ? n.substr(iter, n.size() - iter) : "");
			}
		}
		else
		{
			int number = 9 - sum % 9;
			if (number < n[0])
			{
				n = to_string(number) + n;
			}
			else
			{	
				//cout << "here\n";
				int iter = 0;
				while (iter < n.size() && number > n[iter])
				{
					iter++;
				}
				n = n.substr(0, iter) + to_string(9 - sum % 9) + (iter + 1 < n.size() ? n.substr(iter, n.size() - iter) : "");
			}
		}
		//else
		//{
			//n = to_string(9 - sum % 9) + n;
		//}
		cout << "Case #" << r << ": " << n << '\n';
	}
	return 0;
}



bool is_prime(int number)
{
	if (number <= 1)
	{
		return false;
	}

	for (int i = 2; i * i <= number; i++)
	{
		if (number % i == 0)
		{
			return false;
		}
	}
	return true;
}

int gcd(int a, int b)
{
	if (b == 0)
	{
		return abs(a);
	}
	return gcd(b, a % b);
}

int lcm(int a, int b)
{
	return a * b / gcd(a, b);
}
