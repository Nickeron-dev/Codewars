#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> answer((k * k) + 1, 0);

    vector<vector<int>> board(m);
    for (int i = 0; i < m; i++)
    {
        vector<int> v(m);
        board.push_back(v);
        for (int j = 0; j < m; i++)
        {
            board[i][j] = 0;
            cout << board[i][j];
        }
        cout << endl;
    }
    vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        cin >> vec[i];
    }

    return 0;
}

