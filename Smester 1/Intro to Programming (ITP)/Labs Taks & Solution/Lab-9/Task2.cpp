#include <iostream>

void notAlone(int arr[], int size, int value) {
    if (size < 3) {
        return;
    }

    for (int i = 1; i < size - 1; i++) {
        if (arr[i] == value && arr[i - 1] != value && arr[i + 1] != value) {
            arr[i] = std::max(arr[i - 1], arr[i + 1]);
        }
    }
}

int main() {
    int arr1[] = {1, 2, 3};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    notAlone(arr1, size1, 2);

    std::cout << "Result: ";
    for (int i = 0; i < size1; i++) {
        std::cout << arr1[i] << " ";
    }
    std::cout << std::endl;

    int arr2[] = {1, 2, 3, 2, 5, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    notAlone(arr2, size2, 2);

    std::cout << "Result: ";
    for (int i = 0; i < size2; i++) {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;

    int arr3[] = {3, 4};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);

    notAlone(arr3, size3, 3);

    std::cout << "Result: ";
    for (int i = 0; i < size3; i++) {
        std::cout << arr3[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
