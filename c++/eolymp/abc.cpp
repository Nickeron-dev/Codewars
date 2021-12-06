#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int array [] = {a, b, c};
    int size = 3;
    for (int i = 0; i < size; i++)
    {
        int sum = 0;
        for (int j = 0; j < size; j++)
        {
            if (i != j)
            {
                sum += array[j];
            }
        }
        if (array[i] == sum)
        {
            cout << "Yes";
            return 0;
        }
    }
    cout << "No";
}

