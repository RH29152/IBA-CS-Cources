#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int n;
    std::cout << "Enter an integer n: ";
    std::cin >> n;

    const int arraySize = n + 1;
    int A[arraySize] = {0}; 

   
    std::srand(time(0));

    const int numberOfRandomIntegers = 100000;
    for (int i = 0; i < numberOfRandomIntegers; i++) {
        int randomInteger = std::rand() % n + 1;
        A[randomInteger]++;
    }

 
    for (int i = 1; i <= n; i++) {
        std::cout << "Number " << i << " occurred " << A[i] << " times." << std::endl;
    }

    return 0;
}
