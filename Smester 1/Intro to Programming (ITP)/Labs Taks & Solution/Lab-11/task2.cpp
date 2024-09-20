#include <iostream>

int gcd(int m, int n) {
    if (m == 0) {
        return n;
    } else {
        return gcd(n % m, m);
    }
}

int main() {
    int m, n;

    std::cout << "Enter the first integer (m): ";
    std::cin >> m;

    std::cout << "Enter the second integer (n): ";
    std::cin >> n;

    if (m < n) {
        int result = gcd(m, n);
        std::cout << "The greatest common divisor of " << m << " and " << n << " is: " << result << std::endl;
    } else {
        std::cout << "Please make sure m < n." << std::endl;
    }

    return 0;
}