#include <iostream>

int main() {
   
    double array1[4] = {16.1, 12.3, 22.2, 14.4};
    double array2[6] = {1.5, 4.3, 7.0, 19.5, 25.1, 46.2};
    
    
    bool sorted1 = true;
    bool sorted2 = true;
    
    for (int i = 0; i < 4; i++) {
        if (array1[i] > array1[i + 1]) {
            sorted1 = false;
            break;
        }
    }
    
    for (int i = 0; i < 6; i++) {
        if (array2[i] > array2[i + 1]) {
            sorted2 = false;
            break;
        }
    }
    

    std::cout << "Array 1 is sorted: ";
    if (sorted1) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    
    std::cout << "Array 2 is sorted: ";
    if (sorted2) {
        std::cout << "true" << std::endl;
    } else {
        std::cout << "false" << std::endl;
    }
    
    return 0;
}
