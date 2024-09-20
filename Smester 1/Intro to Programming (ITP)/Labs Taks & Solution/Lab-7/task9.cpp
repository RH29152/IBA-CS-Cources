#include <iostream>

int main() {
    int treasureMap[5][5] = {
        {34, 21, 32, 41, 25},
        {14, 42, 43, 14, 31},
        {54, 45, 52, 42, 23},
        {33, 15, 51, 31, 35},
        {21, 52, 33, 13, 23}
    };

    int currentRow = 0;
    int currentColumn = 0;

    while (true) {
        int currentClue = treasureMap[currentRow][currentColumn];
        std::cout << "Visiting cell (" << currentRow + 1 << ", " << currentColumn + 1 << ") with clue: " << currentClue << std::endl;

        if (currentClue == (currentRow + 1) * 10 + (currentColumn + 1)) {
            std::cout << "Treasure found at cell (" << currentRow + 1 << ", " << currentColumn + 1 <<) << std::endl;
            break;
        }

        currentRow = (currentClue / 10) - 1;
        currentColumn = (currentClue % 10) - 1;

        if (currentRow < 0 || currentRow >= 5 || currentColumn < 0 || currentColumn >= 5) {
            std::cout << "Treasure not found in the array." << std::endl;
            break;
        }
    }

    return 0;
}
