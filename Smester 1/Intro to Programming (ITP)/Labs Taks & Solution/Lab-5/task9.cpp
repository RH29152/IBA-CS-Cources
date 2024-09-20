#include <iostream>

int main() {
    int nums[] = {3, 1, 4, 2, 2}; // Example array
    int n = sizeof(nums) / sizeof(nums[0]);

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (nums[i] == nums[j]) {
                std::cout << "Duplicate found: " << nums[i] << std::endl;
                return 0; 
            }
        }
    }

    std::cout << "No duplicates found." << std::endl;

    return 0;
}
