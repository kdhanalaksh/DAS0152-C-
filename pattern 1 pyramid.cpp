#include <iostream>
using namespace std;
class Pattern {
private:
    int height;
public:
    Pattern(int h) : height(h) {}
    void printTrianglePattern() {
        for (int i = 1; i <= height; ++i) {
            for (int j = 1; j <= i; ++j) {
                cout << "* ";
            }
            cout << endl;
        }
    }
};

int main() {
    int height;
    cout << "Enter the height of the triangle: ";
    cin >> height;
    Pattern p(height);

    p.printTrianglePattern();

    return 0;
}

