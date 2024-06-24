#include <iostream>
using namespace std;
class animal {
public:
    void eat() {
        cout <<"Animal is eating";
    }
};
class dog :public animal {
public:
    void bark() {
        cout << "Dog is barking";
    }
	};
int main() {
    dog mydog;
    mydog.eat();  
    mydog.bark();  

    return 0;
}

