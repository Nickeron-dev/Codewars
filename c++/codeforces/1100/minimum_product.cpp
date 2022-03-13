#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int number);
int gcd(int a, int b); // greatest common divisor
int lcm(int a, int b); // least common multiple

void solution(void)
{
	ll a, b, x, y, n;
	cin >> a >> b >> x >> y >> n;
	
	ll a_c1 = a, b_c1 = b, x_c1 = x, y_c1 = y, n_c1 = n;
	ll minus_c1 = min((b_c1 - y_c1), n_c1);
	n_c1 -= minus_c1;
	b_c1 -= minus_c1;
	if (n_c1 > 0)
	{
		ll sec_minus = min((a_c1 - x_c1), n_c1);
		n_c1 -= sec_minus;
		a_c1 -= sec_minus;
	}
	ll result_one = a_c1 * b_c1;
	
	ll minus = min((a - x), n);
	n -= minus;
	a -= minus;
	if (n > 0)
	{
		ll sec_minus = min((b - y), n);
		n -= sec_minus;
		b -= sec_minus;
	}
	ll result_two = a * b;

	cout << min(result_one, result_two) << '\n';
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
