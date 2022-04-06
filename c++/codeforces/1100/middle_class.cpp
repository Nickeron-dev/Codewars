#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int number);
int gcd(int a, int b); // greatest common divisor
int lcm(int a, int b); // least common multiple

void solution(void)
{
	ll n, x, val, sum = 0;
	cin >> n >> x;
	vector<ll> all;
	for (int i = 0; i < n; i++)
	{
		cin >> val;
		all.push_back(val);
	}
	
	sort(all.begin(), all.end(), greater<ll>());
	int counter = 0;
	while (counter < n && sum + all[counter] >= (counter + 1) * x)
	{
            sum += all[counter];
            counter++;
        }
	cout << counter << '\n';
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
