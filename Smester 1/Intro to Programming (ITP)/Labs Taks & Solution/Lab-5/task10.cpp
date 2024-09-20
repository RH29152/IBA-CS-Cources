#include <iostream>

int main() {
   
    int arr1[] = {1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 1, 1, 0};
    int arr2[] = {0, 0, 1, 0, 1, 0, 1, 0, 1, 0, 1};

   
    int len1 = sizeof(arr1) / sizeof(arr1[0]);
    int len2 = sizeof(arr2) / sizeof(arr2[0]);

  
    int max1s = 0;
    int current1s = 0;

    int max1s2 = 0;
    int current1s2 = 0;

    for (int i = 0; i < len1; ++i) {
        if (arr1[i] == 1) {
            current1s++;
            if (current1s > max1s) {
                max1s = current1s;
            }
        } else {
            current1s = 0;
        }
    }

    for (int i = 0; i < len2; ++i) {
        if (arr2[i] == 1) {
            current1s2++;
            if (current1s2 > max1s2) {
                max1s2 = current1s2;
            }
        } else {
            current1s2 = 0;
        }
    }

  
    std::cout << "Maximum consecutive 1's in arr1: " << max1s << std::endl;
    std::cout << "Maximum consecutive 1's in arr2: " << max1s2 << std::endl;

    return 0;
}
