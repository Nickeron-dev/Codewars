#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    int highest_column = *max_element(vec.begin(), vec.end());
    cout << ((highest_column > n) ? highest_column : n);

}

