#include <iostream>
#include <string>
using namespace std;

int str_to_int(string s) {
    int result = 0;
    int sign = 1;
    int i = 0;

    if (s[i] == '-') {
        sign = -1;
        i++;
    } else if (s[i] == '+') {
        i++;
    }

    while (i < s.length()) {
        if (s[i] >= '0' && s[i] <= '9') {
            result = result * 10 + (s[i] - '0');
            i++;
        } else {
            return 0;
        }
    }

    return result * sign;
}

int main() {
    string s;
    while (cin >> s) {
        cout << str_to_int(s) << endl;
    }
    return 0;
}