#include <iostream>

int main() {
    int matrix[][4] = {{1, 2, 3, 4},
                       {0, 5, 6, 7},
                       {0, 0, 8, 9},
                       {0, 0, 0, 1}};

    int n = 4; 

    bool isUpperTriangular = true;

    
    for (int i = 1; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (matrix[i][j] != 0) {
                isUpperTriangular = false;
                break;
            }
        }
        
    }

    if (isUpperTriangular) {
        std::cout << "The matrix is an upper-triangular matrix." << std::endl;
    } else {
        std::cout << "The matrix is not an upper-triangular matrix." << std::endl;
    }

    return 0;
}
