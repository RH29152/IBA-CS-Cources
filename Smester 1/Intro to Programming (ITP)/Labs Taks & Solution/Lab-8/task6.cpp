#include <iostream>
#include <vector>

bool vector_eq(std::vector<int> v1, std::vector<int> v2) {
    if (v1.size() != v2.size()) {
        return false;
    }

    for (int i = 0; i < v1.size(); i++) {
        if (v1[i] != v2[i]) {
            return false;
        }
    }

    return true;
}

int main() {
    std::vector<int> v1 = {1, 2, 3};
    std::vector<int> v2 = {1, 2, 3};
    std::vector<int> v3 = {1, 2, 4};
    std::vector<int> v4 = {1, 2, 3, 4};

    std::cout << "v1 and v2 are equal: " << vector_eq(v1, v2) << std::endl; // should print true
    std::cout << "v1 and v3 are equal: " << vector_eq(v1, v3) << std::endl; // should print false
    std::cout << "v1 and v4 are equal: " << vector_eq(v1, v4) << std::endl; // should print false

    return 0;
}
