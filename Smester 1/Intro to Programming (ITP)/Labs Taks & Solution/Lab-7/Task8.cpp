#include <iostream>

int main() {
    std::string input_text;
    std::cout << "Enter text to translate to Pig Latin: ";
    std::getline(std::cin, input_text);

    std::string pig_latin_text;
    std::string word;

    bool new_word = true;

    for (char c : input_text) {
        if (std::isalpha(c)) {
            word += c;
        } else {
            if (!word.empty()) {
                if (!new_word) {
                    pig_latin_text += word[0];
                    word = word.substr(1) + "ay";
                }
                pig_latin_text += word + c;
                word.clear();
            } else {
                new_word = true;
                pig_latin_text += c;
            }

            if (std::isalpha(c)) {
                new_word = false;
            }
        }
    }
    if (!word.empty()) {
        if (!new_word) {
            pig_latin_text += word[0];
            word = word.substr(1) + "ay";
        }
        pig_latin_text += word;
    }

    std::cout << "Pig Latin Translation: " << pig_latin_text << std::endl;

    std::string english_text;
    word.clear();
    for (char c : pig_latin_text) {
        if (std::isalpha(c)) {
            word += c;
        } else {
            if (!word.empty()) {
                if (word.length() > 2 && word[word.length() - 2] == 'a' && word[word.length() - 1] == 'y') {
                    word = word.substr(word.length() - 3) + word[0];
                }
                english_text += word + c;
                word.clear();
            } else {
                english_text += c;
            }
        }
    }

    if (!word.empty()) {
        if (word.length() > 2 && word[word.length() - 2] == 'a' && word[word.length() - 1] == 'y') {
            word = word.substr(word.length() - 3) + word[0];
        }
        english_text += word;
    }

    std::cout << "Translation back to English: " << english_text << std::endl;

    return 0;
}
