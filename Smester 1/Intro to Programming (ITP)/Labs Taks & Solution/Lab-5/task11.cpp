#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    int experiments = 10000; 
    int totalPeople = 0;    

    std::srand(time(0));

    for (int i = 0; i < experiments; i++) {
        bool birthdays[365] = {false};  
        int people = 0;                 

        while (true) {
            int birthday = std::rand() % 365;

            if (birthdays[birthday]) {
                break;  
            }

            birthdays[birthday] = true;
            people++;
        }

        totalPeople += people;
    }

    double averagePeople = (double)(totalPeople) / experiments;
    std::cout << "Average number of people for a birthday match: " << averagePeople << std::endl;

    return 0;
}
