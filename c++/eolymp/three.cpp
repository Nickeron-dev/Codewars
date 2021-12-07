#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int counter = 0;
    while (n != 1)
    {
	cout << n << endl;
	if (n == 2)
	{
	    n -= 1;
	    counter++;
	}
        else if (n % 3 == 0)
        {
            n /= 3;
            counter++;
        }
        else
        {
            if ((n - 1) % 3 == 0)
            {
                n -= 1;
                counter++;
            }
            else if ((n + 1) % 3 == 0)
            {
                n += 1;
                counter++;
            }
        }
    }
    cout << "answ: " << counter;
}

