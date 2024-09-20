#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& str) {
    int length = str.length();

    if (length <= 1) {
        return true;
    }

    if (str[0] != str[length - 1]) {
        return false;
    }

    return isPalindrome(str.substr(1, length - 2));
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    if (isPalindrome(input)) {
        cout << "The string is a palindrome." << endl;
    } else {
        cout << "The string is not a palindrome." << endl;
    }

    return 0;
}
