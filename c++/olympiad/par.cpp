#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;

    long long answer = 0;
//    vector<int> a;
//    vector<int> b;
    int first_a, last_a, first_b, last_b;
    int a, b;
    string next_a, next_b;
    for (int i = l; i <= r; i++)
    {
        next_a = std::to_string(i);
        istringstream(next_a.substr(0, 1)) >> first_a;
        istringstream(next_a.substr(next_a.size() - 1, 1)) >> last_a;
        for (int j = l; j <= r; j++)
        {
            next_b = std::to_string(j);
            istringstream(next_b.substr(0, 1)) >> first_b;
            istringstream(next_b.substr(next_b.size() - 1, 1)) >> last_b;
            if (first_a == last_b && last_a == first_b)
            {
                cout << "Got: " << next_a << " " << next_b << endl;
                answer++;
            }
        }
    }
    cout << answer << endl;
    return 0;
}