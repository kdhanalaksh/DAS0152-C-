#include <iostream>
#include <string>
#include <algorithm>

class StringReverser {
private:
    std::string str;

public:
    StringReverser(const std::string& s) : str(s) {}

    void reverse() {
        std::reverse(str.begin(), str.end());
    }
    void displayReversed() const {
        std::cout << "Reversed string: " << str << std::endl;
    }
};

int main() {
    std::string input;

    std::cout << "Enter a string to reverse: ";
    std::getline(std::cin, input);

    StringReverser strReverser(input);
    strReverser.reverse();
    strReverser.displayReversed();

    return 0;
}


