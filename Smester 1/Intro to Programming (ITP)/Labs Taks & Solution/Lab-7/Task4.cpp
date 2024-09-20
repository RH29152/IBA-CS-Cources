#include <iostream>

int main() {
    const int MAX_LENGTH = 100;
    char input[MAX_LENGTH];
    
    std::cout << "Enter a string: ";
    std::cin.getline(input, MAX_LENGTH);
    
    int length = 0;
    while (input[length] != '\0') {
        length++;
    }

    bool isPalindrome = true;
    
    for (int i = 0; i < length / 2; i++) {
        if (input[i] != input[length - i - 1]) {
            isPalindrome = false;
            break;
        }
    }
    
    if (isPalindrome) {
        std::cout << "The string is a palindrome." << std::endl;
    } else {
        std::cout << "The string is not a palindrome." << std::endl;
    }
    
    return 0;
}
