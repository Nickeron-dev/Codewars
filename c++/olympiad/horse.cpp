#include <iostream>
#include <string>
#include <sstream>
#include <cstdlib>

using namespace std;

int main() {
    string s;
    cin >> s;
    int first_char_index = (int) ((int) (s[0]) - 96); // parse letter to number(as an index) using ASCII
    int second_char_index;
    istringstream(s.substr(1, 1)) >> second_char_index;
    int max_moves_for_a_horse = 8;
    int c = 0;
//    for (int i = 0; i < max_moves_for_a_horse; i++)
//    {
//        if (abs(first_char_index - second_char_index) == 1 && abs())
//    }

    if ((first_char_index + 1) <= 8 && (first_char_index + 1) >= 1 && (second_char_index + 2) <= 8 && (second_char_index + 2) >= 1)
    {
        c++;
    }
    if ((first_char_index + 2) <= 8 && (first_char_index + 2) >= 1 && (second_char_index + 1) <= 8 && (second_char_index + 1) >= 1)
    {
        c++;
    }
    if ((first_char_index - 1) <= 8 && (first_char_index - 1) >= 1 && (second_char_index + 2) <= 8 && (second_char_index + 2) >= 1)
    {
        c++;
    }
    if ((first_char_index - 2) <= 8 && (first_char_index - 2) >= 1 && (second_char_index + 1) <= 8 && (second_char_index + 1) >= 1)
    {
        c++;
    }
    if ((first_char_index + 2) <= 8 && (first_char_index + 2) >= 1 && (second_char_index - 1) <= 8 && (second_char_index - 1) >= 1)
    {
        c++;
    }
    if ((first_char_index + 1) <= 8 && (first_char_index + 1) >= 1 && (second_char_index - 2) <= 8 && (second_char_index - 2) >= 1)
    {
        c++;
    }
    if ((first_char_index - 2) <= 8 && (first_char_index - 2) >= 1 && (second_char_index - 1) <= 8 && (second_char_index - 1) >= 1)
    {
        c++;
    }
    if ((first_char_index - 1) <= 8 && (first_char_index - 1) >= 1 && (second_char_index - 2) <= 8 && (second_char_index - 2) >= 1)
    {
        c++;
    }

    cout << c << endl;
    return 0;
}
