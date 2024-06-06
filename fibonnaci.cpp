#include <iostream>

class Fibonacci {
public:
    Fibonacci(int numTerms) : n(numTerms) {}
    void generate() {
        int a = 0, b = 1, next;

        if (n <= 0) {
            std::cout << "Please enter a positive integer." << std::endl;
            return;
        }

        std::cout << "Fibonacci Sequence: " << std::endl;

        for (int i = 1; i <= n; ++i) {
            if (i == 1) {
                std::cout << a << " ";
                continue;
            }
            if (i == 2) {
                std::cout << b << " ";
                continue;
            }
            next = a + b;
            a = b;
            b = next;
            std::cout << next << " ";
        }
        std::cout << std::endl;
    }

private:
    int n; 
};

int main() {
    int n;

    std::cout << "Enter the number of terms: ";
    std::cin >> n;

    Fibonacci fib(n);
    fib.generate();

    return 0;
}

