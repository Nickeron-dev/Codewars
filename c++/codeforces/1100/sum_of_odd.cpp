#include <iostream>

using namespace std;

void solution()
{
	long long n, k;
	cin >> n >> k;
	if (k * k <= n && n % 2 == k % 2) {
		printf("YES\n");
	}
	else {
		printf("NO\n");
	}
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

