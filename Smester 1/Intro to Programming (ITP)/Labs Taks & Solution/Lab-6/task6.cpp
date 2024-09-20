#include <iostream>
#include <string>

int main() {
    std::string input;
    std::getline(std::cin, input);

    int level = 0;

    for (int i = 0; i < input.length(); i++) {
        char c = input[i];
        if (c == '(') {
            level++;
            std::cout << "Level " << level << std::endl;
        } else if (c == ')') {
            level--;
            std::cout << "Level " << level << std::endl;
            if (level < 0) {
                std::cout << "Unmatched ')'" << std::endl;
                return 0; 
            }
        }
    }

    if (level > 0) {
        std::cout << "Unmatched '('" << std::endl;
    } else if (level == 0) {
        std::cout << "Well-bracketed expression" << std::endl;
    }

    return 0;
}
