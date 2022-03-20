#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int number);
int gcd(int a, int b); // greatest common divisor
int lcm(int a, int b); // least common multiple

int main(void)
{
	//std::cin.sync(); //clear buffer
	//std::cin.get(); //wait
	//ios_base::sync_with_stdio(false);
	//cin.tie(NULL);
	int t;
	cin >> t;
	for (int r = 1; r <= t; r++)
	{
		std::string i, p;
		cin >> i >> p;
		
		//cout << "Got: " << i << " and: " << p << endl;
		//cout << "p.szie(): " << p.size() << endl;
		if (i.size() > p.size())
		{
			cout <<  "Case #" << r << ": IMPOSSIBLE" << '\n';
		}
		else
		{
			int f = 0, s = 0, answ = 0;
			for ( ; f < i.size() && s < p.size(); )
			{
				if (i[f] == p[s])
				{
					f++;
					s++;
					continue;
				}
				else
				{
					s++;
					answ++;
					continue;
				}
			}
			if (f == i.size())
			{
				int diff = p.size() - s;
				cout <<  "Case #" << r << ": " << answ + diff  << '\n';
			}
			else
			{
				cout << "Case #" << r << ": IMPOSSIBLE\n";
			}
		}
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
