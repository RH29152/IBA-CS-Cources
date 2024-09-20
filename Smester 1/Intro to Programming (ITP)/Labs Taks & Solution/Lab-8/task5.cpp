#include <iostream>
#include <vector>

int maxSpan(std::vector<int> v) {
    int maxSpan = 0;

    for (int i = 0; i < v.size(); i++) {
        for (int j = v.size() - 1; j >= i; j--) {
            if (v[i] == v[j]) {
                int span = j - i + 1;
                if (span > maxSpan) {
                    maxSpan = span;
                }
            }
        }
    }

    return maxSpan;
}

int main() {
    std::vector<int> v1 = {1, 2, 1, 1, 3};
    std::cout << maxSpan(v1) << std::endl; 

    std::vector<int> v2 = {1, 4, 2, 1, 4, 1, 4};
    std::cout << maxSpan(v2) << std::endl; 

    std::vector<int> v3 = {1, 4, 2, 1, 4, 4, 4};
    std::cout << maxSpan(v3) << std::endl; 

    return 0;
}
