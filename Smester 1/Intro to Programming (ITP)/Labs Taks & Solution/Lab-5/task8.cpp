#include <iostream>
#include <string>

int main() {
    
    std::string strArray[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};

    for (int i = 0; i < 10/2; i++) {
        std::string temp = strArray[i];
        strArray[i] = strArray[10 - 1 - i];
        strArray[10 - 1 - i] = temp;
        
    }

 
    std::cout << "Reversed Array: ";
    for (int i = 0; i < 10; i++) {
        std::cout << strArray[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
