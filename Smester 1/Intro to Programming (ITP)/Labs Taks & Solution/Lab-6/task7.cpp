#include <iostream>
#include <string>

int main() {
    std::string sentence;

    std::cout << "Enter a sentence: ";
    std::getline(std::cin, sentence);

    std::string smallestWord;
    std::string longestWord;
    std::string currentWord;

    bool isWord = false;

    for (int i = 0; i < sentence.size(); i++) {
        char c = sentence[i];
        
        if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
            currentWord += c;
            isWord = true;
        } else {
            if (isWord) {
                if (smallestWord == "" || currentWord.size() < smallestWord.size()) {
                    smallestWord = currentWord;
                }
                if (longestWord == "" || currentWord.size() > longestWord.size()) {
                    longestWord = currentWord;
                }
                currentWord = "";
            }
            isWord = false;
        }
    }

   
    if (isWord) {
        if (smallestWord == "" || currentWord.size() < smallestWord.size()) {
            smallestWord = currentWord;
        }
        if (longestWord == "" || currentWord.size() > longestWord.size()) {
            longestWord = currentWord;
        }
    }

    std::cout << "Smallest word: " << smallestWord << std::endl;
    std::cout << "Longest word: " << longestWord << std::endl;

    return 0;
}

