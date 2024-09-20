#include <iostream>

using namespace std;

int main() {
    long long num;

    cout << "Enter a long number: ";
    cin >> num;

    if (num <= 0) {
        cout << "Please enter a positive integer." << endl;
        return 1;
    }

    cout << "Prime Factors: ";

   
    for (int i = 2; i <= num; i++) {
        while (num % i == 0) {
            cout << i << " ";
            num /= i;
        }
    }

    cout << endl;

    return 0;
}
