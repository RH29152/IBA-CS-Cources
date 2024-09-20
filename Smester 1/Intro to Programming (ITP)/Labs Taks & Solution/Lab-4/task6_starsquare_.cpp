#include <iostream>

int main() {
    int N;

    // Ask the user for the value of N
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Please enter a positive integer for N." << std::endl;
        return 1;
    }

    // Loop to print the N-by-N square pattern
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
