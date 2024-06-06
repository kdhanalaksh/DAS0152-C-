#include <iostream>
using namespace std;
int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;
	int n = 0;
    while (str[n] != '\0') {
        n++;
    }
    for (int i = 0; i < n / 2; ++i) {
        char temp = str[i];
        str[i] = str[n - 1 - i];
        str[n - 1 - i] = temp;
    }
	cout << "Reverse: "<< str << endl;
	return 0;
}

