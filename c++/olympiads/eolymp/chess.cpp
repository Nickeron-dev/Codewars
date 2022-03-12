#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main(){
    string s;
    cin >> s;
    int first_char_index = (int) ((int) (s[0]) - 64);
    int second_char_index;
    istringstream (s.substr(1, 1)) >> second_char_index;
    int amount_of_moves_from_a1 = (first_char_index + second_char_index) - 2;
    if (amount_of_moves_from_a1 % 2 == 0)
    {
        cout << "BLACK";
    }
    else
    {
        cout << "WHITE";
    }

    return 0;
}

