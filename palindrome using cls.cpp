#include <iostream>

class NumberPalindromeChecker {
private:
    int number;

public:
    NumberPalindromeChecker(int n) : number(n) {}
    bool isPalindrome() const {
        int originalNumber = number;
        int reversedNumber = 0;
        int temp = originalNumber;

        while (temp != 0) {
            int digit = temp % 10;
            reversedNumber = reversedNumber * 10 + digit;
            temp /= 10;
        }

        return originalNumber == reversedNumber;
    }
    void displayResult() const {
        if (isPalindrome()) {
            std::cout << number << " is a palindrome." << std::endl;
        } else {
            std::cout << number << " is not a palindrome." << std::endl;
        }
    }
};

int main() {
    int input;

    std::cout << "Enter a number to check if it is a palindrome: ";
    std::cin >> input;

    NumberPalindromeChecker palindromeChecker(input);
    palindromeChecker.displayResult();

    return 0;
}


