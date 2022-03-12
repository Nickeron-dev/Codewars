#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int counter = 0;
    for (int i = 0; i < s.size(); i++)
    {
        char current = s[i];
        int current_count = 1;
        for (int j = i + 1; j <= s.size(); j++) {
            if (j == s.size()) {
                j = 0;
            }
            if (j == i) {
                break;
            }
            if ((int) current + 1 == (int) s[j]) {
                current_count++;
            }
            else
            {
                break;
            }
            current = s[j];
        }
        if (current_count > counter)
        {
            counter = current_count;
        }
        current_count = 0;
    }
    cout << counter << endl;
    return 0;
}
