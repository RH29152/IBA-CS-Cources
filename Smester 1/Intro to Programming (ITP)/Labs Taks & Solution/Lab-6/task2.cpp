#include <iostream>

int main() {
    int a[][4] = {{2, 5, 7, 1},
                  {1, 3, 6, 1},
                  {5, 4, 1, 3}};

    int j = 2; 
 	int sum = 0;

  
    for (int i = 0; i < 3; ++i) {
        sum += a[i][j];
    }

    std::cout << "Sum of elements in column " << j << " is: " << sum << std::endl;

    return 0;
}
