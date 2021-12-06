#include <iostream>
using namespace std;

int main(){
    int a, b, c, d;
    cin >> a >> b >> c >> d; // they can be also inputted in one line(separeted with spaces)
    int sum_ukr = a + d;
    int sum_pot = b + c;
    // cout << a << " " << b << " " << c << " " << d << endl;
    // cout << sum_ukr << " " << sum_pot << endl;
    if (sum_ukr > sum_pot)
    {
        cout << "U";
        return 0;
    }
    else if (sum_pot > sum_ukr)
    {
        cout << "P";
        return 0;
    }
    else
    {
        if (d > b)
        {
            cout << "U";
        }
        else if (b > d)
        {
            cout << "P";
        }
        else
        {
            cout << "T";
        }
    }
    
    
}

