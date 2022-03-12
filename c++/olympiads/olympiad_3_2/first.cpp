#include <iostream>
#include <vector>

using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int count_answer{};

    int temp = 0;
    for (int j = 0; j < b; j++) {
        temp++;
    }
    temp *= a;
    count_answer += temp;

    temp = 0;
    for (int j = 0; j < c; j++) {
        temp++;
    }
    temp *= a;
    count_answer += temp;

    vector<int> vec_b;
    for (int i = 1; i <= b; i++)
    {
        vec_b.push_back(i);
    }

    vector<int> vec_c;
    for (int i = 1; i <= c; i++)
    {
        vec_c.push_back(i);
    }

    temp = 0;
    for (int i = 0; i < vec_b.size(); i++)
    {
        for (int j = 0; j < vec_c.size(); j++)
        {
            temp++;
        }
    }
    temp *= a;
    count_answer += temp;

    cout << count_answer << endl;
    return 0;
}
