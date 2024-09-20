#include <iostream>

int findMax(int arr[], int n) {
    if (n == 1) {
        return arr[0];
    }
    int max_in_rest = findMax(arr, n - 1);
    if (arr[n - 1] > max_in_rest) {
        return arr[n - 1];
    } else {
        return max_in_rest;
    }
}

int main() {
    int arr[] = {3, 8, 1, 10, 6, 4, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int max = findMax(arr, n);
    std::cout << "The maximum element in the array is: " << max << std::endl;
    return 0;
}




