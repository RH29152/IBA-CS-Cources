#include <iostream>

int main() {
    const int n = 3; 
    int matrix[n][n] = {{2, 7, 6},
                        {9, 5, 1},
                        {4, 3, 8}};

   
    int expectedSum = 0;
    for (int j = 0; j < n; ++j) {
        expectedSum += matrix[0][j];
    }

  
    bool isMagicSquare = true;
    for (int i = 0; i < n; i++) {
        int rowSum = 0;
        for (int j = 0; j < n; j++) {
            rowSum += matrix[i][j];
        }
        if (rowSum != expectedSum) {
            isMagicSquare = false;
            break;
        }
    }

    
    if (isMagicSquare) {
        for (int j = 0; j < n; j++) {
            int colSum = 0;
            for (int i = 0; i < n; i++) {
                colSum += matrix[i][j];
            }
            if (colSum != expectedSum) {
                isMagicSquare = false;
                break;
            }
        }
    }

  
    if (isMagicSquare) {
        int diagonalSum1 = 0;
        int diagonalSum2 = 0;
        for (int i = 0; i < n; ++i) {
            diagonalSum1 += matrix[i][i];
            diagonalSum2 += matrix[i][n - i - 1];
        }
        if (diagonalSum1 != expectedSum || diagonalSum2 != expectedSum) {
            isMagicSquare = false;
        }
    }

    if (isMagicSquare) {
        std::cout << "The matrix is a magic square." << std::endl;
    } else {
        std::cout << "The matrix is not a magic square." << std::endl;
    }

    return 0;
}
