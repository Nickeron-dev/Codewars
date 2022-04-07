#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

bool is_prime(int number);
int gcd(int a, int b); // greatest common divisor
int lcm(int a, int b); // least common multiple

void solution(void)
{
	int n;
	cin >> n;
	vector<int> vec;
	for (int i = 0; i < n; i++)
	{
		int val;
		cin >> val;
		vec.push_back(val);
	}
	
	int k = 0;
	while(k < n && vec[k] == 1) {
		k++;
	}
	cout << ((k == n) ^ (k % 2) ? "Second" : "First") << '\n';
	
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
