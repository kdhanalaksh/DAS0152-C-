#include <iostream>

using namespace std;

int main() {
    float centi,inches,feet, remainingInches;
    cout << "Enter length in centimeters: ";
    cin >> centi;
    inches = centi/ 2.54;
    feet = inches / 12;
    remainingInches = inches - feet * 12;
    cout << centi << " centimeters is " << feet << " feet " << remainingInches << " inches." ;

    return 0;
}

