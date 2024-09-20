#include <iostream>

int main() {
    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    if (num > 0) 
    {
        std::cout << "Positive" << std::endl;
    } 
    else if (num < 0) 
    {
        std::cout << "Negative" << std::endl;
    } 
    else 
    {
        std::cout << "Zero" << std::endl;
    }

    return 0;
}
