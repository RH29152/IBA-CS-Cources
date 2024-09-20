#include <iostream>

int main() {
    int n;

    
    std::cout << "Enter the number of lines to print: ";
    std::cin >> n;

    if (n <= 0) {
        std::cout << "Please enter a positive integer." << std::endl;
        return 1;
    }

    for (int i = 1; i <= n; i++) {
        std::string letter;

        if (i % 10 == 1 && i % 100 != 11) {
            letter = "st";
        } else if (i % 10 == 2 && i % 100 != 12) {
            letter = "nd";
        } else if (i % 10 == 3 && i % 100 != 13) {
            letter = "rd";
        } else {
            letter = "th";
        }

        std::cout << i << letter << " Hello" << std::endl;
    }

    return 0;
}
