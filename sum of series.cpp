#include <iostream>

using namespace std;

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int sum = (n * (n + 1)) / 2;
    cout << "Sum of the series 1 + 2 + 3 + ... + " << n << " is: " << sum << endl;

    return 0;
}

