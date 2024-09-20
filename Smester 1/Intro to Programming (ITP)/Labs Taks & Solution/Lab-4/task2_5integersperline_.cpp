#include <iostream>

int main() {
    for (int i = 1000; i <= 2000; i++) {
        std::cout << i << ' ';
        
        
        if ((i - 999) % 5 == 0) 
		{
            std::cout << std::endl; 
        }
    }

    return 0;
}
