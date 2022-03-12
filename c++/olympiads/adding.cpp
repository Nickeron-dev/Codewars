#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> vec(n);
    for (int i = 0; i < n; i++)
    {
        cin >> vec[i];
    }
    vector<int> indexes;
    int answer = 0;
    for (int i = 0; i < n - 1; i++)
    {
        if (vec[i] > vec[i + 1])
        {
            vec[i + 1] += vec[i];
            indexes.push_back(i + 2);
            indexes.push_back(i + 3);
            answer++;
        }
    }
    cout << answer << endl;
    for (int i = 0; i < indexes.size(); i += 2)
    {
        cout << indexes[i] << " " << indexes[i + 1] << endl;
    }
    return 0;
}
