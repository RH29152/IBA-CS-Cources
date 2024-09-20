#include <iostream>

int main() {
    int n;
    int sum = 0;
    int i = 1; 

    
    std::cout << "Enter a positive integer (n): ";
    std::cin >> n;

    while (i <= n) 
	{
        sum = sum + i; 
        i++;          
    }

    std::cout << "The sum of integers from 1 to " << n << " is: " << sum << std::endl;

    return 0;
}
