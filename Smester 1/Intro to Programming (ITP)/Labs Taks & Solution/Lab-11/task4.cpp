#include <iostream>
using namespace std;

int evenDigits(int n) {
    if (n == 0) {
        return 0;
    }

    int lastDigit = n % 10; 

    if (lastDigit % 2 == 0 || lastDigit == 0) {
        return evenDigits(n / 10) * 10 + lastDigit;
    } else {
        return evenDigits(n / 10); 
    }
}

int main() {
    int input;
    cout << "Enter an integer: ";
    cin >> input;

    int result = evenDigits(input);

    cout << "Result after removing odd digits: " << result << endl;

    return 0;
}
