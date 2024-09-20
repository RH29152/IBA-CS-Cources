#include <iostream>

int main() {
    int N;

    // Ask the user for the number of rows
    std::cout << "Enter the number of rows: ";
    std::cin >> N;

    if (N <= 0) {
        std::cout << "Please enter a positive integer for the number of rows." << std::endl;
        return 1;
    }

    // Loop to print the star triangle
    for (int i = 1; i <= N; i++) {
        for (int j = 1; j <= i; j++) {
            std::cout << "* ";
        }
        std::cout << std::endl;
    }

    return 0;
}
