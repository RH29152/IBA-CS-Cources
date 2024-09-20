#include <iostream>
#include <cstdlib>
#include <ctime>
#include<cmath>

int main() {
    
    srand(time(0));

    int random1 = rand();
    int random2 = rand();
    int random3 = rand();

    
    double average = (random1 + random2 + random3) / 3.0;

   
    int minimum = fmin(fmin(random1, random2), random3);
    int maximum = fmax(fmax(random1, random2), random3);

    
    std::cout << "Random Value 1: " << random1 << std::endl;
    std::cout << "Random Value 2: " << random2 << std::endl;
    std::cout << "Random Value 3: " << random3 << std::endl;
    std::cout << "Average Value: " << average << std::endl;
    std::cout << "Minimum Value: " << minimum << std::endl;
    std::cout << "Maximum Value: " << maximum << std::endl;

    return 0;
}
