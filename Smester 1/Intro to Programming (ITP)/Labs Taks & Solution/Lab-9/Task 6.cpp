#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> toMatrix(int x) {
    vector<vector<int>> matrix(3, vector<int>(3, 0));

    for (int i = 2; i >= 0; i--) {
        for (int j = 2; j >= 0; j--) {
            matrix[i][j] = x % 2;
            x /= 2;
        }
    }

    return matrix;
}

void printCoinsMatrix(const vector<vector<int>>& a) {
    for (int i = 0; i < a.size(); i++) {
        for (int j = 0; j < a[i].size(); j++) {
            if (a[i][j] == 0) {
                cout << 'H' << ' ';
            } else {
                cout << 'T' << ' ';
            }
        }
        cout << endl;
    }
}

int main() {
    int userNumber;
    
    cout << "Enter a number between 0 and 511: ";
    cin >> userNumber;

    if (userNumber < 0 || userNumber > 511) {
        cout << "Invalid input. Please enter a number between 0 and 511." << endl;
        return 1;
    }

    vector<vector<int>> matrix = toMatrix(userNumber);

    cout << "Corresponding matrix:" << endl;
    printCoinsMatrix(matrix);

    return 0;
}
