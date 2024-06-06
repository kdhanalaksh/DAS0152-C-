#include <iostream>
using namespace std;
int main() {
    int num1, num2, result = 0;
	cout << "Enter the first number: ";
    cin >> num1;
	cout << "Enter the second number: ";
    cin >> num2;
	for (int i = 0; i < num1; ++i) {
        result += num2;
    }
	 cout << "result"<< result;

    return 0;
}

