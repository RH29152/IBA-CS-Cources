#include <iostream>

int main() {
    int n, k;

    std::cout << "Enter the size of the array: ";
    std::cin >> n;

    int arr[n];

    std::cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    std::cout << "Enter the number of positions to rotate (k): ";
    std::cin >> k;

  

    for (int i = 0; i < k; i++) {
        int temp = arr[0]; 
        for (int j = 0; j < n - 1; j++) {
            arr[j] = arr[j + 1]; 
        }
        arr[n - 1] = temp; 
    }

   
    std::cout << "Rotated Array: ";
    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
