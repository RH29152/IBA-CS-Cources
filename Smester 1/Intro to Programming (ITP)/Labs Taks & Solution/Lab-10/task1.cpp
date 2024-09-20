#include <iostream>

unsigned long long factorial(int n) {
    if (n == 0) {
        return 1; 
    } else {
        return (unsigned long long)((n) * factorial(n - 1)); 
    }
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer (n) to compute n!: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        unsigned long long result = factorial(n);
        std::cout << n << "! = " << result << std::endl;
    }

    return 0;
}
