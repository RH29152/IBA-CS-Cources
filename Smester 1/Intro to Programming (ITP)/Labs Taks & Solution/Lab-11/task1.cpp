#include <iostream>

int fibonacci(int n) {
    if (n <= 0) {
        return -1;  
    } else if (n == 1 || n == 2) {
        return 1;
    } else {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

int main() {
    int result = fibonacci(7);
    std::cout << result << std::endl;  

    return 0;
}