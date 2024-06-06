#include <iostream>
#include <cstring> 

class StringCopy {
private:
    char* str;

public:
   
    StringCopy(const char* input) {
        str = new char[strlen(input) + 1]; 
        strcpy(str, input);                
    }

  
    StringCopy(const StringCopy& other) {
        str = new char[strlen(other.str) + 1]; 
        strcpy(str, other.str);                
    }

    ~StringCopy() {
        delete[] str;
    }

    void display() const {
        std::cout << str << std::endl;
    }

    
    StringCopy& operator=(const StringCopy& other) {
        if (this == &other) {
            return *this; 
        }

        delete[] str; 

        str = new char[strlen(other.str) + 1];
        strcpy(str, other.str);               

        return *this;
    }
};

int main() {
   
    StringCopy string1("Hello, World!");
    StringCopy string2 = string1;
    std::cout << "String 1: ";
    string1.display();
    std::cout << "String 2: ";
    string2.display();
    StringCopy string3("Temporary String");
    string3 = string1;

    std::cout << "String 3 after assignment: ";
    string3.display();

    return 0;
}

