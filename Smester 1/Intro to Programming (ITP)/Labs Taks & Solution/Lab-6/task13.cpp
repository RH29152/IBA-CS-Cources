#include <iostream>
#include <cmath>

int main() {
    int n;
    std::cout << "Enter the value of n: ";
    std::cin >> n;

    int q[n];

    std::cout << "Enter the permutation (0 to n-1): ";
    for (int i = 0; i < n; ++i) {
        std::cin >> q[i];
    }

    bool legal = true;

    for (int i = 0; i < n && legal; ++i) {
        for (int j = i + 1; j < n; ++j) {
           
            if (q[i] == q[j] || abs(q[i] - q[j]) == abs(i - j)) {
                legal = false; 
                break;
            }
        }
    }

    if (legal) {
        std::cout << "The permutation corresponds to a legal placement of queens." << std::endl;
    } else {
        std::cout << "The permutation does not correspond to a legal placement of queens." << std::endl;
    }

    return 0;
}
