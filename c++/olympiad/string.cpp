#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main() {
    string s;
    cin >> s;
    int answer = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if ((s.substr(i, 1) == string("B") && s.substr(i + 1, 1) == string("R")) || (s.substr(i, 1) == string("R") && s.substr(i + 1, 1) == string("B")))
        {
            answer++;
            i++; // not to check second element as it is already taken
        }
    }
    cout << answer << endl;
    return 0;
}

