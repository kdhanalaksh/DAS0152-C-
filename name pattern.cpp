#include <iostream>
#include <string>
using namespace std;

class NameTriangle {
public:
    NameTriangle(string& name) : name(name) {}
    void printTriangle() 
	 {
        for (size_t i = 1; i <= name.length(); ++i) {
            for (size_t j = 0; j < i; ++j) {
                cout << name[j];
            }
            cout <<endl;
        }
    }
private:
    string name;
};

int main() {
    string name;
    cout << "Enter your name: ";
    cin >> name;

    NameTriangle nameTriangle(name);
    nameTriangle.printTriangle();

    return 0;
}

