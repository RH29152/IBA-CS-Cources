#include<iostream>
#include<string>

int main()
{
	std::string name;
	int age;
	
	std::cout<<"Enter you name: ";
	std::cin>>name;
	
	std::cout<<"Enter you age: ";
	std::cin>>age;
	
	std::cout<<"Hello "<<name<<" , you are "<<age<<" years old.";
	
	return 0;
}

