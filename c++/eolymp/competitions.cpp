#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n);
    int amount_of_boys = 0;
    int amount_of_girls = 0;
    for (int i = 0; i < n; i++) {
        cin >> v[i];
        if (v[i] == 1)
        {
            amount_of_boys++;
            continue;
        }
        amount_of_girls++;
    }
    
    cout << ((amount_of_boys > amount_of_girls) ? amount_of_girls : amount_of_boys) << endl;
}

