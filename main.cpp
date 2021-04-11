/******************************************************************************
The program converts an input number into its Roman version and 
only accepts numbers from 1 to 10.

@version 10/09/2020
*******************************************************************************/

#include <iostream>
using namespace std;

int main()
{
    // getting a number from a user
    int Num;
    cout << "Enter a number from 1 to 10 \n";
    cin >> Num;
    
    // input validation
    if ((Num < 1) || (Num > 10)) {
        cout << "Wrong number.\n";
        return 0;
    }
    
    cout << "The Roman numeral version is ";
    switch (Num) {
        case 1: cout << "I\n";
                break;
        case 2: cout << "II\n";
                break;
        case 3: cout << "III\n";
                break;
        case 4: cout << "IV\n";
                break;
        case 5: cout << "V\n";
                break; 
        case 6: cout << "VI\n";
                break;
        case 7: cout << "VII\n";
                break;
        case 8: cout << "VIII\n";
                break;
        case 9: cout << "IX\n";
                break;
        case 10: cout << "X\n";
                break;
    }
    return 0;
}
