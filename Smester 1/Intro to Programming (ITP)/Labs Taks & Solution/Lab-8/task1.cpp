#include <iostream>

long long factorial(long long n) {
    if (n < 0) {
        return -1; 
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        long long result = 1;
        for (long long i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    int n;
    std::cout << "Enter an integer n: ";
    std::cin >> n;

    long long result = factorial(n);

    if (result == -1) {
        std::cout << "Factorial is not defined for negative numbers." << std::endl;
    } else {
        std::cout << n << "! = " << result << std::endl;
    }

    return 0;
}
