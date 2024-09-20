#include <iostream>


int main() {
    int day, month, year;

    std::cout << "Enter No. of Days in integers: "<< std::endl;
    std::cin >> day;
    
	std::cout << "Enter Month (1-12): "<< std::endl;
    std::cin >> month;
    
    std::cout << "Enter Year:"<< std::endl;
    std::cin >> year;
    
    int y0 = year - (14 - month) / 12;
    int x = y0 + y0 / 4 - y0 / 100 + y0 / 400;
    int m0 = month + 12 * ((14 - month) / 12) - 2;
    int d0 = (day + x + 31 * m0 / 12) % 7;

    std::cout<<"The day (0=Sunday, 1=Monday, ...) for the date you mentioned is: "<<d0<<std::endl;

    return 0;
}
