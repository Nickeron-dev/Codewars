#include <iostream>
#include <vector>
#include <cstdlib>

using namespace std;

vector<int> bubbleSort(vector<int> arr, int n)
{
    int i, j;
    for (i = 0; i < n-1; i++)
    {
        for (j = 0; j < n-i-1; j++)
        {
            if (arr[j] > arr[j+1])
            {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    return arr;
}

int main() {
    vector<int> vec(3);
    for (int i = 0; i < 3; i++) {
        cin >> vec[i];
    }
    int c = 0;
    vec = bubbleSort(vec, vec.size());
    c += abs(vec[0]);
    for (int i = 0; i < vec.size(); i++)
    {
        c += abs(vec[i + 1] - vec[i]);
    }
    cout << c << endl;
    return 0;
}

