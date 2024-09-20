#include <iostream>
#include <string>
#include <cmath>

int main() {
    srand(time(0));
    bool boy, girl;
    int children;

    boy = false;
    girl = false;

    while (!boy || !girl) {
        int n = rand() % 100;
        double prob = n / 100.0;

        if (prob >= 0.5) {
            boy = true;
            children += 1;
        } else {
            girl = true;
            children += 1;
        }
    }

    std::cout << "Expected number of children: " << children;
    return 0;
}
