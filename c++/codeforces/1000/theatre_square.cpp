#include <cstdio>
#include <cmath>

int main()
{
	long long n, m, a;
	scanf("%lld", &n);
	scanf("%lld", &m);
	scanf("%lld", &a);
	long long answer = std::ceil((double) n / a) * std::ceil((double) m / a);
	printf("%lld\n", answer);
	return 0;
}
