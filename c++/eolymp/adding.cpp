#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n = 1;
    //cin >> n;

    int counter = 0;
    int temp = 0;
    for (int j = pow(10, n - 1); j < pow(10, n); j++)
    {
        cout << "J: " << j << endl;
        for (int i = pow(10, n - 1); i < pow(10, n); i++)
        {
            bool isContinue = true;
            cout << "I: " << i << endl;
            for (int k = n - 1; k >= 0; k--)
            {
                int first_number_character;
                istringstream (to_string(j).substr(k, 1)) >> first_number_character;
                // string zero = "0";
                // if (first_number_character.size() < n)
                // {
                //     for (int m = 0; m < n - first_number_character.size(); m++)
                //     {
                //         first_number_character = zero + first_number_character;
                //         cout << "f:" << first_number_character << endl;
                //     }
                // }
                int second_number_character;
                istringstream (to_string(i).substr(k, 1)) >> second_number_character;
                // if (second_number_character.size() < n)
                // {
                //     for (int m = 0; m < n - second_number_character.size(); m++)
                //     {
                //         second_number_character = zero + second_number_character;
                //         cout << "f:" << second_number_character << endl;
                //     }
                // }
                if ((first_number_character + second_number_character) >= 10)
                {
                    isContinue = false;
                    break;
                }
                
            }
            if (isContinue)
            {
                //cout << "Chosen: " << j << " " << i << endl;
                temp++;
            }
            
        }
	counter += temp;
	cout << "Temp: " << temp << endl;
	temp = 0;
    }

    cout << counter;
    
}

