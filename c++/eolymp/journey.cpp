#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;

void printArray(vector<int> arr, int size)
{
    int i;
    for (i = 0; i < size; i++)
        cout << arr[i] << " ";
    cout << endl;
}
 
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

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++) {
        cin >> v[i];
    }

    v = bubbleSort(v, v.size());
    int distance = 0;
    for (int i = 0; i < n - 1; i++)
    {
        distance += abs(v[i] - v[i + 1]);
    }
    distance += abs(v[0] - v[n - 1]);
    
    printArray(v, v.size());

    cout << distance;
    return 0;

}

