#include <iostream>
#include <string>

int main() {
    std::string inputString;

    std::cout << "Enter a string: ";
    std::getline(std::cin, inputString);

    int stringLength = inputString.size();

    int boxWidth = stringLength + 4; 

  
    std::cout << "+";
    for (int i = 0; i < boxWidth; i++) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    
    std::cout << "| " << " "<< inputString << " "<< " |" << std::endl;

   
    std::cout << "+";
    for (int i = 0; i < boxWidth; i++) {
        std::cout << "-";
    }
    std::cout << "+" << std::endl;

    return 0;
}
