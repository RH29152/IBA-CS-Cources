#include <iostream>

int main() {
    int n;
    double harmonicSum = 0.0;

    std::cout << "Enter an integer n: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        harmonicSum += 1.0 / i; 
    }

    std::cout << "The Sum of Harmonic Series is: "<< harmonicSum << std::endl;

    return 0;
}
