#include <iostream>
#include <math.h>
#include <string>
#include <sstream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int counter = 0;
    int temp = 0;
    int each_char[] = {0, 0, 0, 0, 0};
    for (int i = pow(10, n - 1); i < (pow(10, n) - pow(10, n - 1)); i++)
    {
        //cout << "I: " << i << endl;
        //int temp_counter = 0;
	int minus = n;
        for (int k = n - 1; k >= 0; k--, minus--)
        {
            int number_character;
            istringstream (to_string(i).substr(k, 1)) >> number_character;
        //    each_char[k] += 10 - number_character - (n - 1 - k);
	    if (minus == 1)
                each_char[k] += 10 - number_character - minus;
            else
                each_char[k] += 10 - number_character;
            //cout << "el:  " << number_character << " res: " << each_char[k] << endl;
        }

        for(int m = 0; m < 5; m++)
        {
            //cout << "Array " << m << " is " << each_char[m];
            if (each_char[m] != 0)
            {
                if (temp == 0)
                {
                    temp += each_char[m];
                }
                else
                {
                    temp *= each_char[m];
                }
                
            }
        }
        cout << "temp: " << temp << endl;
        counter += temp;
        temp = 0;
        fill_n(each_char, 5, 0);
    }
    cout << counter;
    
}

