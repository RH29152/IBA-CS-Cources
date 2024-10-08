#include <iostream>

int main() {
    int n = 100;
    long long fib[n];

    fib[0] = 1;
    fib[1] = 1;

    for (int i = 2; i < n; i++) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    for (int i = 0; i < n; i++) {
        std::cout << fib[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}
