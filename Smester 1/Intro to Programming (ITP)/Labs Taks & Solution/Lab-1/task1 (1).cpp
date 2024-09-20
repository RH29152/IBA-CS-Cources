#include<iostream>

int main()
{
	int length;
	int breadth;
	
	std::cout<<"Enter the length ";
	std::cin>>length;
	
	std::cout<<"Enter the breadth ";
	std::cin>>breadth;
	
	int area;
	area=length*breadth;
	
	std::cout<<"The Area of rectangle is: "<<area;
	
	return 0;
}