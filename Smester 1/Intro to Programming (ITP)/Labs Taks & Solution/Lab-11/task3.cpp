#include <iostream>
using namespace std;

string removeX(string s) {
   
    if (s.empty()) {
        return "";
    }

   if (s[0] == 'x') {
        return removeX(s.substr(1));
    }

   return s[0] + removeX(s.substr(1));
}

int main() {
    string input;
    cout << "Enter a string: ";
    cin >> input;

    string result = removeX(input);

    cout << "String with 'x' removed: " << result << endl;

    return 0;
}
