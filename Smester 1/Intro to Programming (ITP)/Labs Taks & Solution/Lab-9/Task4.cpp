#include <iostream>
using namespace std;

double calculatePi(int n) {
    double pi = 0;
    int sign = 1;

    for (int i = 0; i < n; i++) {
        pi += sign * 4.0 / (2 * i + 1);
        sign = -sign;
    }

    return pi;
}

int main() {
    int n = 200000;
    double approximatedPi = calculatePi(n);
    cout << "Approximated π using " << n << " terms: " << approximatedPi << endl;

    string approximatedPiStr = to_string(approximatedPi);
    
    int termsNeeded = 0;
    double threshold = 3.14159;
    double currentPi = 0;
    sign = 1;
    
    while (currentPi < threshold) {
        currentPi += sign * 4.0 / (2 * termsNeeded + 1);
        sign = -sign;
        termsNeeded++;
    }

    cout << "Terms needed for 3.14159 approximation: " << termsNeeded << endl;

    return 0;
}