#include <iostream>
#include <string>

int count_vowels(std::string s) {
    int vowelCount = 0;

    for (char c : s) {
        char lowercaseChar = tolower(c);

        if (lowercaseChar == 'a' || lowercaseChar == 'e' || lowercaseChar == 'i' || lowercaseChar == 'o' || lowercaseChar == 'u') {
            vowelCount++;
        }
    }

    return vowelCount;
}

int main() {
    std::string input;
    std::cout << "Enter a string: ";
    std::cin >> input;

    int result = count_vowels(input);

    std::cout << "Number of vowels in the string: " << result << std::endl;

    return 0;
}
