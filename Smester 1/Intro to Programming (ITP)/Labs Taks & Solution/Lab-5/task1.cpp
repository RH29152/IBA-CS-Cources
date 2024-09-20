#include <iostream>

int main() {
    for (int marla = 5; marla <= 30; marla += 5) {
        double squareYards = marla * 30.25;
        std::cout << marla << " marla = " << squareYards << " square yards" << std::endl;
    }

    return 0;
}
