#include <bits/stdc++.h>
using namespace std;

string FindBoardStatus(int size, vector<char> &board) {
  // TODO: Complete this function to find the status of the board.

  return "";
}

int main() {
  int t;
  cin >> t;
  char ch;
  for (int tc = 1; tc <= t; ++tc) {
    int n;
    cin >> n;
    vector<char> board;
    for (int r = 0; r < n; ++r) {
	  board.emplace_back();
      for (int c = 0; c < n; ++c) {
        cin >> ch;
        board[r].push_back(ch);
      }
    }
    cout << "Case #" << tc << ": " << FindBoardStatus(n, board) << endl;
  }
  return 0;
}
