#include <iostream>
#include <vector>

bool canBalance(std::vector<int> nums) {
    int totalSum = 0;
    int leftSum = 0;

    for (int i = 0; i < nums.size(); i++) {
        totalSum += arr[i];
    }

    for (int i = 0; i < nums.size(); i++) {
        leftSum += nums[i];
        if (leftSum == totalSum - leftSum) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> v1 = {1, 1, 1, 2, 1};
    std::vector<int> v2 = {2, 1, 1, 2, 1};
    std::vector<int> v3 = {10, 10};

    std::cout << "v1 can balance: " << canBalance(v1) << std::endl;
    std::cout << "v2 can balance: " << canBalance(v2) << std::endl; 
    std::cout << "v3 can balance: " << canBalance(v3) << std::endl;

    return 0;
}
