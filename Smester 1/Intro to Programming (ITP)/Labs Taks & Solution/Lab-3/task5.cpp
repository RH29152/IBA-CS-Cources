#include <iostream>
#include <cstdlib>


int main() {
    int windSpeed;
    std::cout << "enter the wind speed: ";
    std::cin >> windSpeed;
    
	if (windSpeed >= 76 && windSpeed <= 95)
	{
        std::cout << "1";
    }
	else if (windSpeed >= 96 && windSpeed <= 110)
	{
        std::cout << "2";
    }
	else if (windSpeed >= 111 && windSpeed <= 130)
	{
        std::cout << "3";
    }
	else if (windSpeed >= 131 && windSpeed <= 155)
	{
        std::cout << "4";
    }
    else if (windSpeed >= 156){
        std::cout << "5";
    }
	else{
        std::cout << "It does not qualify as a hurricane";
    }
    return 0;
}