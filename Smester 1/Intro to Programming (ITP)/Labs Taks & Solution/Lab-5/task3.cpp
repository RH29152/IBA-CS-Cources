#include <iostream>

int main() {
    int num;

    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num < 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    bool allOdd = true;

    while (num > 0) {
        int digit = num % 10; 
        
        if (digit % 2 == 0) {
            allOdd = false; 
            break; 
        }
        
        num /= 10; 
    }

    if (allOdd) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }

    return 0;
}
