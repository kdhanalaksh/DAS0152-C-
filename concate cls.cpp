#include <iostream>
#include <cstring>

class StringManipulator {
private:
    char* str;

public:
    StringManipulator(const char* input = "") {
        str = new char[strlen(input) + 1];
        strcpy(str, input);
    }
    StringManipulator(const StringManipulator& other) {
        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);
    }
    ~StringManipulator() {
        delete[] str;
    }
    StringManipulator& operator=(const StringManipulator& other) {
        if (this == &other) {
            return *this;
        }

        delete[] str; 

        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);

        return *this;
    }
    void concatenate(const char* input) {
        char* newStr = new char[strlen(str) + strlen(input) + 1];
        strcpy(newStr, str);
        strcat(newStr, input);

        delete[] str; 
        str = newStr; 
    }
    void display() const {
        std::cout << str << std::endl;
    }
};

int main() {
    StringManipulator string1("Hello");
    string1.concatenate(", World!");
    std::cout << "Concatenated String: ";
    string1.display();

    return 0;
}

