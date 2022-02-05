#include <iostream>
using namespace std;

int main(){

    int w, b;
    cin >> w >> b;

    if (b - w >= 3 || w - b >= 3)
    {
        cout << -1 << endl;
        return 0;
    }
    int n = 3,  m = w + b;
    cout << n << ' ' << m << '\n';
    for(int i = 1; i <= n; i++) {
        bool is_black;
        if (w > b)
        {
            is_black = false;
        }
        else if (b >= w)
        {
            is_black = true;
        }
        for (int j = 1; j <= m; j++)
        {
            if (i == 2)
            {
                cout << ((is_black) ? 'B' : 'W');
                is_black = ! is_black;
            }
            else
            {
                cout << '.';
            }

        }

        cout << '\n';
    }

    return 0;
}

