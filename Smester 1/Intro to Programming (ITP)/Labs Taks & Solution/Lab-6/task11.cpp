#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); 

    int n;
    std::cout << "Enter the number of guests (n): ";
    std::cin >> n;

    double glassCount = 0;

    for (int simulation = 0; simulation < 1000; ++simulation) {
        bool glassFound = false;
        int glasses[n];

        for (int i = 0; i < n; ++i) {
            glasses[i] = i;
        }

        for (int i = 0; i < n; ++i) {
            int random_number = rand() % n;
            int temp = glasses[i];
            glasses[i]= random_number;
            random_number = temp;
            
        }

        for (int i = 0; i < n; ++i) {
            if (glasses[i] == i) {
                glassFound = true;
                break;
            }
        }

        if (glassFound) {
            glassCount++;
        }
    }

    double fraction = glassCount / 1000.0;
	
    std::cout << "Fraction of times at least one guest gets their original glass: " << fraction << std::endl;

    return 0;
}
