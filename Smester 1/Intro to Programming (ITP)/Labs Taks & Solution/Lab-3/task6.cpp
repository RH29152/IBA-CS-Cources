#include <iostream>
#include<cmath>

int main() {
    double a, b, c;

    std::cout << "Enter the values for a, b, & c: ";
    std::cin >> a >> b >> c;

    double discriminant = (b * b) - (4 * a * c);

    if (discriminant > 0) 
	{
        double r1 = (-b + std::sqrt(discriminant)) / (2 * a);
        double r2 = (-b - std::sqrt(discriminant)) / (2 * a);
        std::cout << "The equation has two real roots: r1 = " << r1 << " and r2 = " << r2 << std::endl;
    } 
	else if (discriminant == 0) 
	{
        double r1 = -b / (2 * a);
        std::cout << "The equation has one real root: r1 = " << r1 << std::endl;
    } 
	else {

        std::cout << "The equation has no real roots." << std::endl;
    }

    return 0;
}
