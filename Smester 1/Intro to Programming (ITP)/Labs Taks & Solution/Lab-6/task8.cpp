#include <iostream>

int main() {
    int currentNumber, previousNumber, longestNumber, currentCount, longestCount;

    
    currentCount = 1;  
    longestCount = 1;  

    std::cout << "Enter a sequence of integers (terminate with -1):" << std::endl;

    while (std::cin >> currentNumber && currentNumber != -1) {
        if (currentNumber == previousNumber) {
            currentCount++; 
        } else {
            if (currentCount >= longestCount) {
                longestCount = currentCount; 
                longestNumber = previousNumber; 
            }
            currentCount = 1; 
        }
        previousNumber = currentNumber; 
    }

   
    if (currentCount >= longestCount) {
        longestCount = currentCount; 
        longestNumber = previousNumber; 
    }

    if (longestCount > 1) {
        std::cout << "Longest run: " << longestCount << " consecutive " << longestNumber << 's' << std::endl;
    } else {
        std::cout << "No consecutive runs found." << std::endl;
    }

    return 0;
}
