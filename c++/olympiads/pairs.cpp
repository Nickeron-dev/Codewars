#include <iostream>
#include <string>
#include <sstream>
#include <vector>
#include <algorithm>
#include <math.h>

using namespace std;

int main() {
    int l, r;
    cin >> l >> r;


    long long answer = 0;
//    vector<int> a;
//    vector<int> b;
    int first_a, last_a, first_b, last_b;
    int a, b, longest_int;
    string next_a, next_b, l_str;
    l_str = to_string(l);

    if (r < 10000 || l > 1000)
    {
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
                if (first_a == last_b && last_a == first_b) answer++;
            }
        }
        cout << answer << endl;
        return 0;
    }
    else
    {
        if (l == 0) answer ++;
        for (int i = l; i <= r; i++)
        {
            next_a = std::to_string(i);
            istringstream(next_a.substr(next_a.size() - 1, 1)) >> last_a;
            //cout << "a: " << next_a << endl;
            if (last_a != 0)
            {

                next_b = next_a;
                std::reverse(next_b.begin(), next_b.end());
                //cout << "b: " << next_b << endl;
                istringstream(next_b) >> b;
                if (b <= r && b >= l)
                {
                    //cout << "Got: " << next_a << " " << next_b << endl;
                    int possibles_size = next_b.size() - 2;
                    //cout << "P: " << possibles_size << endl;
                    int res = (possibles_size >= 1) ? pow(10, possibles_size) : 1;
                    //cout << "REs: " << res << endl;
                    int max_same_nums = l_str.size() - 2;
                    answer += res;
                    //if (max_same_nums > 0) answer += max_same_nums;
                }
            }
        }
        cout << answer << endl;
    }

    cout << answer << endl;
    return 0;
}
