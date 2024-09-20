#include <iostream>
#include<cmath>

int main() {
    int num1, num2;

    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    
    if (num2 == 0) {
        num2 = abs(num1);
        num1 = 0;
    } else {
        num1 = abs(num1);
        num2 = abs(num2);
    }

    while (num2 != 0) {
        int temp = num2;
        num2 = num1 % num2;
        num1 = temp;
    }

    std::cout << "GCD is: " << num1 << std::endl;

    return 0;
}
