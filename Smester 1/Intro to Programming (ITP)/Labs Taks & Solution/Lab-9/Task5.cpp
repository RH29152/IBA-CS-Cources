#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

vector<vector<int>> genRandomMatrix(int m, int n) {
    vector<vector<int>> matrix(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = rand() % 2; 
        }
    }
    return matrix;
}

void printMatrix(const vector<vector<int>>& a) {
   for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            cout << a[i][j] << ' ';
        }
        cout << endl;
    }
}

int findMaxOnesRow(const vector<vector<int>>& a) {
    int maxOnes = 0;
    int maxRowIndex = 0;
    for (int i = 0; i < a.size(); i++) {
        int countOnes = 0;
        for (int j = 0; j < a[0].size(); j++) {
            countOnes += a[i][j];
        }
        if (countOnes > maxOnes) {
            maxOnes = countOnes;
            maxRowIndex = i;
        }
    }
    return maxRowIndex;
}

int findMaxOnesCol(const vector<vector<int>>& a) {
    int maxOnes = 0;
    int maxColIndex = 0;
    for (int j = 0; j < a[0].size(); j++) {
        int countOnes = 0;
        for (int i = 0; i < a.size(); i++) {
            countOnes += a[i][j];
        }
        if (countOnes > maxOnes) {
            maxOnes = countOnes;
            maxColIndex = j;
        }
    }
    return maxColIndex;
}

int main() {
    srand(time(0));

    vector<vector<int>> matrix = genRandomMatrix(4, 4);

    cout << "Randomly generated matrix:" << endl;
    printMatrix(matrix);
    cout << endl;

    int maxRowIndex = findMaxOnesRow(matrix);
    int maxColIndex = findMaxOnesCol(matrix);

    cout << "The largest row index: " << maxRowIndex + 1 << endl;
    cout << "The largest column index: " << maxColIndex + 1 << endl;

    return 0;
}
