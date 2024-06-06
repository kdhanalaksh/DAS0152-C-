#include <iostream>

using namespace std;

int main() {
    int n;
    int sumEven = 0, sumOdd = 0;
    cout << "Enter the value of n: ";
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sumEven += i;
        } else {
            sumOdd += i;
        }
    }

    cout << "Sum of even numbers from 1 to " << n << ": " << sumEven << endl;
    cout << "Sum of odd numbers from 1 to " << n << ": " << sumOdd << endl;

    return 0;
}

