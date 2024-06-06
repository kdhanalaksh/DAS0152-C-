#include <iostream>

using namespace std;

int main() {
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;
    while (y != 0) {
        int temp = y;
        y = x % y;
        x = temp;
    }
    cout << "GCD of the two numbers is: " << x << endl;

    return 0;
}

