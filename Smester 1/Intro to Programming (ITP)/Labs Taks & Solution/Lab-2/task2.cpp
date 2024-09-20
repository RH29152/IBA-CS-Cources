#include <iostream>
#include <cmath>

int main() {
    int num1, num2, num3;

    
    std::cout << "Enter three integer values: ";
    std::cin >> num1 >> num2 >> num3;

    
    int min = fmin(fmin(num1, num2), num3);
    int max = fmax(fmax(num1, num2), num3);

   
    int middle = num1 + num2 + num3 - min_val - max_val;

    // Print the values in ascending order
    std::cout << "Ascending order: " << min << " " << middle << " " << max << std::endl;

    return 0;
}
