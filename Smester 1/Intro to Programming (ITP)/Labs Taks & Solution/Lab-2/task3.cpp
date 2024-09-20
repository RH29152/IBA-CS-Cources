#include <iostream>

int main() {
    
    std::cout << "Enter a 9-digit integer: ";
    int input;
    std::cin >> input;
    
    int d2 = input % 10;
	int d3 = (input % 100) / 10;
	int d4 = (input % 1000) / 100;
	int d5 = (input % 10000) / 1000;
	int d6 = (input % 100000) / 10000;
	int d7 = (input % 1000000) / 100000;
	int d8 = (input % 10000000) / 1000000;
	int d9 = (input % 100000000) / 10000000;
	int d10 = (input % 1000000000) / 100000000;


	int d1 = (d10 * 1 + d9 * 2 + d8 * 3 + d7 * 4 + d6 * 5 + d5 * 6 + d4 * 7 + d3 * 8 + d2 * 9) % 11;
				 
	std::cout << "The 10-digit ISBN number is: ";
	std::cout << d10 << d9 << d8 << d7 << d6 << d5 << d4 << d3 << d2 << d1;


	/*
	Alternate technique for calculating checksum or d1's value
	
	
	int value = (2*d2 + 3*d3 + 4*d4 + 5*d5 + 6*d6 + 7*d7 + 8*d8 + 9*d9 + 10*d10) % 11;
    	int checksum = 11-  value;
    
	std::cout << "d1: " << checksum  <<std::endl;
    	std::cout << "Isbn is : " << d10 << d9 << d8 <<d7<<d6 <<d5 << d4 << d3 << d2 <<checksum  <<std::endl;
    	
	*/

    return 0;
}
