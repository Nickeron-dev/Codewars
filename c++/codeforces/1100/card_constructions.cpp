#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int number);
int gcd(int a, int b); // greatest common divisor
int lcm(int a, int b); // least common multiple

//int main(void)
//{
	//ll n, level = 1, sum = 0;
	//cin >> n;
	//while (sum < n)
	//{
		//n += level - 1;
		//n += level * 2;
		//level++;
	//}
	//cout << level - 1 << '\n';
	//return 0;
//}

void solution(void)
{
	ll n, level = 1, sum = 0, count = 0;
	cin >> n;
	while (n > 1)
	{
		sum = 0;
		level = 1;
		while (sum + (level - 1) + (level * 2) <= n)
		{
			sum += level - 1;
			sum += level * 2;
			//cout << "sum: " << sum << '\n';
			level++;
		}
		n -= sum;
		count++;
	}
	cout << count << '\n';
}

int main(void)
{
	int t;
	cin >> t;
	while (t--)
	{
		solution();
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
