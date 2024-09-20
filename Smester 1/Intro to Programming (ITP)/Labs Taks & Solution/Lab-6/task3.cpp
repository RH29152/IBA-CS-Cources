#include <iostream>

int main() {
    int a[][3] = {{9, 5, 7},
                  {1, 3, 6},
                  {5, 4, 1},
                  {0, 8, 2}};

    int rows = 4;
    int cols = 3;

    int b[3][4]; 
  
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            b[i][j] = a[j][i];
        }
    }

 
    std::cout << "Transpose of the matrix:" << std::endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            std::cout << b[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
