#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int binaryNumber, decimalNumber = 0, remainder, i = 0;
    cout << "Enter a binary number: ";
    cin >> binaryNumber;
    while (binaryNumber != 0) {
        remainder = binaryNumber % 10;
        binaryNumber /= 10;
        decimalNumber += remainder * pow(2, i);
        ++i;
    }
    cout << "Decimal equivalent: " << decimalNumber << endl;

    return 0;
}

