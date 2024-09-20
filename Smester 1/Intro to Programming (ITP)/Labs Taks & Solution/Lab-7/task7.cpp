#include <iostream>
#include <string>

int main() {
    std::string strings[] = {"Hello", "World", "in", "a", "frame"};
    int numStrings = sizeof(strings) / sizeof(strings[0]);

    int max_length = 0;
    for (int i = 0; i < numStrings; i++) {
        int len = strings[i].length();
        if (len > max_length) {
            max_length = len;
        }
    }

    for (int i = 0; i < max_length + 4; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;

    for (int i = 0; i < numStrings; i++) {
        std::cout << "* " << strings[i];
        for (int j = strings[i].length(); j < max_length; j++) {
            std::cout << " ";
        }
        std::cout << " *" << std::endl;
    }

    for (int i = 0; i < max_length + 4; i++) {
        std::cout << "*";
    }
    std::cout << std::endl;

    return 0;
}
