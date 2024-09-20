#include <iostream>
#include <cstdlib> 
#include <ctime>   

int main() {
    
    std::srand(time(0));

    int rollDice = (std::rand() % 6) + 1;

    std::cout << "The rolling dice gets a number: " << rollDice << std::endl;

    return 0;
}
