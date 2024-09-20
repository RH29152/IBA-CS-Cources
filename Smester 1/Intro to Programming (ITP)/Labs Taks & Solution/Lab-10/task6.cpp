#include <iostream>
using namespace std;

void writeChars(int n) {
    if (n == 1)
        cout << "*";
    else if (n == 2)
        cout << "**";
    else {
        if (n>2 && n<7)
        {
            cout << "<";
            writeChars(n - 2);
            cout << ">";
        }
        else 
        {
            cout << "<";
            writeChars(n - 2);
            cout << ">>>";
        }
    }
}

int main() {
    int n;

    cout << "Enter the value of n: ";
    cin >> n;

    writeChars(n);

    return 0;
}
