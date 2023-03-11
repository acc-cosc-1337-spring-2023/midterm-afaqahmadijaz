#include <iostream>
#include <string>
#include "question4.cpp"

using namespace std;

int main()  {
    string binary_string;
    while (true) {
        cout << "Enter an 8-digit binary string or (enter 'E' to Exit): ";
        cin >> binary_string;

         if (binary_string == "e"|| binary_string == "E") {
            break;
        }

        if (binary_string.length() != 8) {
            cout << "Invalid binary string length. Please enter an 8-digit binary string." << endl;
            continue;
        }

        bool invalid_character = false;
        for (char c : binary_string) {
            if (c != '0' && c != '1') {
                invalid_character = true;
                break;
            }
        }

        if (invalid_character) {
            cout << "Invalid character found in binary string. Please enter a binary string consisting of only 0s and 1s."<< endl;
            continue;
        }

        int decimal = binary_to_decimal(binary_string);
        cout << "Decimal value of binary string is: " << decimal << endl;

    }

    return 0;
}