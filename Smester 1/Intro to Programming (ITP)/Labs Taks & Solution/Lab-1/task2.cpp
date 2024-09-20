#include<iostream>

int main()
{
	float fahrenheit;
	float celsius;
	
	std::cout<<"Enter the temperature in Farenheit: ";
	std::cin>>fahrenheit;
	
	celsius = (fahrenheit - 32) * 5 / 9;
	
	std::cout<<"The converted temperature in Celcius is: "<<celsius;
	
	return 0;
}
