#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int j = 0; j < n; j++)
    {
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            int next = (i + 1 == n) ? 0 : i + 1;
            if (v[i] == v[j] && v[i] == v[next])
            {
                counter++;
            }
        }
        if (counter >= 2)
        {
            cout << "Yes";
            return 0;
        }
    }
    
    cout << "No";
    return 0;
}


