#include <iostream>
#include <string>
using namespace std;

bool isAnagram(const string& str1, const string& str2) {
    if (str1.length() != str2.length()) {
        return false;
    }

    int charCount1[26] = {0};
    int charCount2[26] = {0};

    for (char c : str1) {
        if (isalpha(c)) {
            charCount1[tolower(c) - 'a']++;
        }
    }

    for (char c : str2) {
        if (isalpha(c)) {
            charCount2[tolower(c) - 'a']++;
        }
    }

    for (int i = 0; i < 26; i++) {
        if (charCount1[i] != charCount2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    string input1, input2;
    cout << "Enter the first string: ";
    getline(cin, input1);

    cout << "Enter the second string: ";
    getline(cin, input2);

    if (isAnagram(input1, input2)) {
        cout << "The two strings are anagrams." << endl;
    } else {
        cout << "The two strings are not anagrams." << endl;
    }

    return 0;
}
