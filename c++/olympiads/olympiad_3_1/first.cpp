#include <iostream>

using namespace std;

int main() {
    int n, m, w, t;
    cin >> n >> m >> w >> t;

    int counter = 0;
    for (int i = t; i >= 0; i -= w)
    {
        counter += m;
    }
    cout << ((counter < n) ? counter : n) << endl;
    return 0;
}
