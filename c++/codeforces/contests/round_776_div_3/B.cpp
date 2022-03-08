//#include <bits/stdc++.h>

//using namespace std;

//int main()
//{
	////cout <<  % 7 << endl;
	//int t;
	//cin >> t;
	//for (int m = 0; m < t; m++)
	//{
		//long long l, r, a, maxim = 0;
		//cin >> l >> r >> a;
		//int first = l / a, second = r / a;
		//if (first != second)
		//{
			//maxim = a - 1;
			//long long val = r % a;
			//r -= val;
			//r -= 1;
			////while (r % a != maxim)
			////{
				////r--;
			////}
			//maxim += r / a;
		//}
		//else
		//{
			//maxim = r % a;
			////while (r % a != maxim)
			////{
				////r--;
			////}
			//maxim += r / a;
		//}
		////cout << "L:  " << l / a << " r: " << r / a << endl;
		//cout << maxim << '\n';
	//}
	//return 0;
//}

#include <bits/stdc++.h>
 
using namespace std;

int main()
{
    long long t = 1;
    cin >> t;
    while (t--) {
		int l, r, a;
		cin >> l >> r >> a;
		int m = r % a;
		int maximum = r / a + r % a;
		int r1 = r - (m + 1);
		if (l <= r1 && r1 <= r)
		{
			maximum = max(maximum, r1 / a + r1 % a);
		}
		cout << maximum << '\n';
    }
    return 0;
}
