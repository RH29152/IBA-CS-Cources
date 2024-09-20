#include <iostream>
#include <cctype>  
using namespace std;

bool isValid(const string& password) {
    if (password.length() < 10) {
        return false;
    }

    int digitCount = 0;
    bool hasLetter = false;

    for (char c : password) {
        if (isdigit(c)) {
            digitCount++;
        }
        if (isalpha(c)) {
            hasLetter = true;
        }
    }

    if (digitCount >= 2 && hasLetter) {
        return true;
    } else {
        return false;
    }
}

int main() {
    string password;
    cout << "Enter a password: ";
    cin >> password;

    if (isValid(password)) {
        cout << "The password is valid." << endl;
    } else {
        cout << "The password is not valid." << endl;
    }

    return 0;
}
