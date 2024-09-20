#include <iostream>
#include <vector>

using namespace std;

bool isValidSudoku(const vector<vector<int>>& board) {
    for (int i = 0; i < 9; i++) {
        vector<bool> rowCheck(10, false);
        vector<bool> colCheck(10, false);

        for (int j = 0; j < 9; j++) {
            if (board[i][j] != 0) {
                if (rowCheck[board[i][j]]) {
                    return false;
                }
                rowCheck[board[i][j]] = true;
            }

            if (board[j][i] != 0) {
                if (colCheck[board[j][i]]) {
                    return false;
                }
                colCheck[board[j][i]] = true;
            }
        }
    }

    for (int blockRow = 0; blockRow < 9; blockRow += 3) {
        for (int blockCol = 0; blockCol < 9; blockCol += 3) {
            vector<bool> blockCheck(10, false);

            for (int i = blockRow; i < blockRow + 3; i++) {
                for (int j = blockCol; j < blockCol + 3; j++) {
                    if (board[i][j] != 0) {
                        if (blockCheck[board[i][j]]) {
                            return false;
                        }
                        blockCheck[board[i][j]] = true;
                    }
                }
            }
        }
    }

    return true;
}

int main() {
    vector<vector<int>> sudokuBoard = {
        {5, 3, 4, 6, 7, 8, 9, 1, 2},
        {6, 7, 2, 1, 9, 5, 3, 4, 8},
        {1, 9, 8, 3, 4, 2, 5, 6, 7},
        {8, 5, 9, 7, 6, 1, 4, 2, 3},
        {4, 2, 6, 8, 5, 3, 7, 9, 1},
        {7, 1, 3, 9, 2, 4, 8, 5, 6},
        {9, 6, 1, 5, 3, 7, 2, 8, 4},
        {2, 8, 7, 4, 1, 9, 6, 3, 5},
        {3, 4, 5, 2, 8, 6, 1, 7, 9}
    };

    if (isValidSudoku(sudokuBoard)) {
        cout << "Valid Sudoku solution." << endl;
    } else {
        cout << "Invalid Sudoku solution." << endl;
    }

    return 0;
}
