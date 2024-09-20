#include <iostream>

int main() {
    int n;

    std::cout << "Enter the number of integers: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Invalid input. Please enter a positive number." << std::endl;
        return 1;
    }

    int numbers[n]; 

    std::cout << "Enter " << n << " integers, separated by spaces:" << std::endl;
    for (int i = 0; i < n; i++) {
        std::cin >> numbers[i];
    }

    int evenCount = 0;
    for (int i = 0; i < n; i++) {
        if (numbers[i] % 2 == 0) {
            evenCount++;
        }
    }

    std::cout << "Count of even integers: " << evenCount << std::endl;

    return 0;
}
