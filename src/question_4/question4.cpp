#include "question4.h"
#include <string>

int binary_to_decimal(std::string binary_string) {
    int decimal = 0;
    int base = 1;
    int length = binary_string.length();

    for (int j = length - 1; j >= 0; j--) {
        if (binary_string[j] == '1') {
            decimal += base;
        }
        base *= 2;
    }

    return decimal;
}

int binaryToDecimal(int binaryNumber) {
    int decimalNumber = 0;
    int base = 1;

    while (binaryNumber > 0) {
        int lastDigit = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += lastDigit * base;
        base *= 2;
    }
    return decimalNumber;
}

bool test_config()
{
    return true;
}