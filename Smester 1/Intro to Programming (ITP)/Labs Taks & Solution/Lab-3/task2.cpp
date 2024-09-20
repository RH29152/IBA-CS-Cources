#include <iostream>


int main() {
    int year, month;

    
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << "Enter a month (1-12): ";
    std::cin >> month;

    if (month < 1 || month > 12) 
	{
        std::cout << "Invalid month. Please enter a month between 1 & 12." << std::endl;
        return 1; 
    }

    int totalDays;


	 if (month == 2) 
	 {
        if (year % 400 == 0 || year % 4 == 0)
        	{
        		totalDays = 29;
			}
			else if (year % 100 != 0)
			{
				totalDays = 28;
			}
			else
			{
				totalDays = 28;
			}
	} 
	else if (month == 4 || month == 6 || month == 9 || month == 11) 
	{
        totalDays = 30;
	} 
	else 
	{
        totalDays = 31;
    }

    std::cout << "Number of days in month " << month << " of year " << year << " is: " << totalDays << std::endl;

    return 0;
    
}
