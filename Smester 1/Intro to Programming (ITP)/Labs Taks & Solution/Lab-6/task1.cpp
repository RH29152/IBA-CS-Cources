#include <iostream>

int main() {
    int a[][4] = {{2, 5, 7, 1},
                  {1, 3, 6, 1},
                  {5, 4, 1, 3}};

    int b[][4] = {{1, 9, 5, 0},
                  {7, 1, 5, 4},
                  {3, 4, 2, 8}};

    int result[3][4]; 

    
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            result[i][j] = a[i][j] + b[i][j];
        }
    }

   
    std::cout << "Result of matrix addition:" << std::endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            std::cout << result[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
