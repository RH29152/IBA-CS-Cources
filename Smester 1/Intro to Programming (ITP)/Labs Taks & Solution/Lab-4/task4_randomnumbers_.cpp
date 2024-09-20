#include <iostream>
#include <string>
#include <cmath>

int main() {
    srand(time(0));
    int x, n;

    x = 1 + rand() % 100;
    n = -1;
    std::cout << x;
    while (x != n) {
        std::cout << "Guess the number: ";
        std::cin >> n;

        if (n > x) {
            std::cout << "Too high" << std::endl;
        } else if (n < x) {
            std::cout << "Too low" << std::endl;
        }
    }
    std::cout << "Correct Guess!";
    return 0;
}
