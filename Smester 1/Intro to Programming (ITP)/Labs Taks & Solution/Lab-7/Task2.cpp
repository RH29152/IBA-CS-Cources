#include "raylib.h"
#include<iostream>

int main() {
    // Initialize Raylib
    int n;
    std::cout<<"Enter the size of the checkerboard (n): ";
    std::cin>>n;

    int screenWidth = 400;
    int screenHeight = 400;
    InitWindow(screenWidth, screenHeight, "Checkerboard");

    int squareSize = screenWidth / n;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                Color squareColor;

               
                if (i == n - 1 && j == 0) {
                    squareColor = RED;
                } else {
                    if ((i + j) % 2 == 0) {
                        squareColor = BLACK;
                    } else {
                        squareColor = RED;
                    }
                }

                DrawRectangle(j * squareSize, i * squareSize, squareSize, squareSize, squareColor);
            }
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}