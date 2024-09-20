#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    srand(time(0)); 

    int N;
    std::cout << "Enter the value of N: ";
    std::cin >> N;

    
    int permutation[N];
    for (int i = 0; i < N; ++i) {
        permutation[i] = i;
        std::cout << permutation[i] << " ";
    }
    std::cout << std::endl;
    

   
    for (int i = 0; i < N; i++) {
        int j = rand() % N;
        int temp = permutation[i];
        permutation[i] = permutation[j];
        permutation[j] = temp;
    }

   
    std::cout << "Random Permutation: ";
    for (int i = 0; i < N; ++i) {
        std::cout << permutation[i] << " ";
    }
    std::cout << std::endl;

    
    for (int i = 0; i < N; ++i) {
        for (int j = 0; j < N; ++j) {
            if (permutation[i] == j) {
                std::cout << "Q ";
            } else {
                std::cout << "* ";
            }
        }
        std::cout << std::endl;
    }

    return 0;
}
 