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
	long long ans = 1e18;
	for (int i = 0; i < 2; ++i) {
			int da = min(n, a - x);
			int db = min(n - da, b - y);
			ans = min(ans, (a - da) * 1ll * (b - db));
			swap(a, b);
			swap(x, y);
		}
		cout << ans << endl;
	//if (a > b)
	//{
		//ll minus = min((b - y), n);
		//n -= minus;
		//b -= minus;
		////while (b > y && n > 0)
		////{
			////b--;
			////n--;
		////}
		//if (n > 0)
		//{
			//ll sec_minus = min((a - x), n);
			//n -= sec_minus;
			//a -= sec_minus;
		//}
		////while (a > x && n > 0)
		////{
			////a--;
			////n--;
		////}
	//}
	//else
	//{
		//ll minus = min((a - y), n);
		//n -= minus;
		//a -= minus;
		//if (n > 0)
		//{
			//ll sec_minus = min((b - x), n);
			//n -= sec_minus;
			//b -= sec_minus;
		//}
		////while (a > y && n > 0)
		////{
			////a--;
			////n--;
		////}
		////while (b > x && n > 0)
		////{
			////b--;
			////n--;
		////}
	//}
	////cout << "a: " << a << " b: " << b << '\n';
	//cout << a * b << '\n';
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
