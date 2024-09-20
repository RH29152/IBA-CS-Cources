#include <iostream>
#include <string>

int main() {
    int n;

    std::cout << "Enter an integer: ";
    std::cin >> n;

    if (n == 0) {
        std::cout << "Binary representation: 0" << std::endl;
        return 0;
    }

    std::string binary = "";

    while (n > 0) {
        if (n % 2 == 1) {
            binary += "1"; 
        } else {
            binary += "0"; 
        }
        n /= 2;
    }
 
    std::string reversedBinary = "";
    for (int i = binary.length() - 1; i >= 0; i--) 
	{
        reversedBinary += binary[i];
    }

    std::cout << "Binary representation: " << reversedBinary << std::endl;

    return 0;
}


/**********************Second Alternative Solution*********************/

/*
#include <iostream>
#include <string>
#include <cmath>

int main() {
    int n, k, v, dot_count;
    v = 1;

    std::cout << "Enter a number: ";
    std::cin >> n;

    while (v <= n) {
        v *= 2;
    }
    v /= 2;
    k = log2(v);

    for (int i = 0; i <= k; i++) {
        if (v <= n) {
            std::cout << 1;
            n -= v;
        } else {
            std::cout << 0;
        }
        v = v / 2;
    }
    return 0;
}

*/