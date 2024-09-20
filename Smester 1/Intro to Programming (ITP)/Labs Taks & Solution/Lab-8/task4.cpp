#include <iostream>
#include <vector>

double percent_even(std::vector<int> v) {
    int evenCount = 0;

    for (int num : v) {
        if (num % 2 == 0) {
            evenCount++;
        }
    }

    return (double)(evenCount) / v.size() * 100.0;
}

int main() {
    std::vector<int> v1 = {6, 2, 9, 11, 3};
    std::cout << percent_even(v1) << std::endl; 

    std::vector<int> v2 = {6, 2, 9, 11, 4};
    std::cout << percent_even(v2) << std::endl; 

    std::vector<int> v3 = {1, 3, 5, 7, 9};
    std::cout << percent_even(v3) << std::endl;

    return 0;
}
