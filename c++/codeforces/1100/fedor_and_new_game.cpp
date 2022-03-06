#include <iostream>
#include <bitset>

using namespace std;

int main()
{
	int n, m, k, fedor;
	cin >> n >> m >> k;
	int *opponents = new int[m];
	for (int i = 0; i < m; i++)
	{
		cin >> opponents[i];
	}
	cin >> fedor;
	//bitset<32> fedor_bit(fedor);
	int answer = 0;
	for (int i = 0; i < m; i++)
	{
		//bitset<32> val(opponents[i]);
		//cout << "val          : " << val << '\n';
		//cout << "fedor        : " << fedor_bit << '\n';
		bitset<32> res(opponents[i] ^ fedor);
		//cout << "fedor and val: " << res << '\n'; 
		//cout << "differnce: " << res.count() << '\n';
		if (res.count() <= k)
		{
			answer++;
		}
		
	}
	cout << answer << endl;
}
