#include <iostream>

int main() {
    int num;

    std::cout << "Enter a positive number: ";
    std::cin >> num;

    int i = 1; 

    while (i <= 10) 
	{
		int result = num * i; 
        std::cout << num << " * " << i << " = " << result << std::endl;
        i++; 
    }

    return 0;
}
