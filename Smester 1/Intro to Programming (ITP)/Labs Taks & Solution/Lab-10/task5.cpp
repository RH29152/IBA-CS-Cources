#include <iostream>

double sumTo(int n) {
    if (n == 1) {
        return 1.0; 
    } else {
        return 1.0 / n + sumTo(n - 1); 
    }
}

int main() {
    int n;
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    if (n >= 1) {
        double result = sumTo(n);
        std::cout << "The sum of the reciprocals from 1 to " << n << " is: " << result << std::endl;
    } else {
        std::cout << "Please enter a positive integer." << std::endl;
    }

    return 0;
}
