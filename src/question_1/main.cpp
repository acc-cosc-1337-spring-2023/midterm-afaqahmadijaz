#include <iostream>
#include <string>
#include "question1.h"
using namespace std;

int main() {
    string input;
    while (true) {
        cout << "Enter a string(Enter exit to quit): ";
        cin >> input;
        if (input == "exit" || input == "EXIT") {
            break;
        }
        bool result = is_palindrome(input);
        cout << boolalpha << result << endl;
    }
    return 0;
}