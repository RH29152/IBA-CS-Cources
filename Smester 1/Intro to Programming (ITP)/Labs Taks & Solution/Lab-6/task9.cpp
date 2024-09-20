#include <iostream>

int main() {
    int n;
    std::cout << "Enter a positive integer n: ";
    std::cin >> n;

    if (n < 2) {
        std::cout << "No prime numbers less than " << n << std::endl;
        return 0;
    }

   
    bool isPrime[n + 1];
    for (int i = 0; i <= n; i++) {
        isPrime[i] = true;
    }
    isPrime[0] = isPrime[1] = false;

   
    for (int p = 2; p * p <= n; p++) {
        if (isPrime[p]) {
            for (int i = p * p; i <= n; i += p) {
                isPrime[i] = false;
            }
        }
    }

  
    int primeCount = 0;
    std::cout << "Prime numbers less than " << n << " are:" << std::endl;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            std::cout << i << " ";
            primeCount++;
        }
    }
    std::cout << std::endl;

    std::cout << "Total prime numbers less than " << n << ": " << primeCount << std::endl;

    return 0;
}
