#include <iostream>

int count7(int n) {
    if (n == 0) {
        return 0;
    }

    int lastDigit = n % 10;

    if (lastDigit == 7) {
        return 1 + count7(n / 10);
    } else {
        return count7(n / 10);
    }
}

int main() {
    int n;
    std::cout << "Enter a non-negative integer: ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "Please enter a non-negative integer." << std::endl;
    } else {
        int count = count7(n);
        std::cout << "The count of 7s in " << n << " is: " << count << std::endl;
    }

    return 0;
}
