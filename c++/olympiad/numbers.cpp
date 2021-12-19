#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n > 788)
    {
        cout << 1234 << endl; // as all greater values will have the same answer
        return 0;
    }
    int answer;
    int max_possible_answer = 789;
    bool isReady = true;
    for (int i = n; i <= max_possible_answer; i++)
    {
        std::string next = std::to_string(i);
        //cout << next << endl;
        for (int j = 0; j < next.size() - 1; j++)
        {
            int first;
            istringstream(next.substr(j, 1)) >> first;
            //cout << "f: " << first << endl;
            int second;
            istringstream(next.substr(j + 1, 1)) >> second;
            //cout << "s: " << second << endl;
            if (first >= second)
            {
                isReady = false;
                break;
            }
        }
        if (isReady)
        {
            answer = i;
            break;
        }
        isReady = true;

    }
    cout << answer << endl;
    return 0;
}
