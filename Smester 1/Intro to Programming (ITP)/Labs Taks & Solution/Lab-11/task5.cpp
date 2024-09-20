#include "raylib.h"

void drawRecursiveSquares(int x, int y, int size, int n) {
    if (n == 0) {
        return; 
    }

    DrawRectangle(x - size / 2, y - size / 2, size, size, GRAY);

    DrawRectangleLines(x - size / 2, y - size / 2, size, size, BLACK);

    int nextSize = size / 2.2;

    int x0 = x - size / 2 + nextSize / 2;
    int y0 = y - size / 2 + nextSize / 2;

    drawRecursiveSquares(x0, y0, nextSize, n - 1); 
    drawRecursiveSquares(x0 + size, y0, nextSize, n - 1); 
    drawRecursiveSquares(x0, y0 + size, nextSize, n - 1); 
    drawRecursiveSquares(x0 + size, y0 + size, nextSize, n - 1); 
}

int main() {
    const int screenWidth = 800;
    const int screenHeight = 800;

    InitWindow(screenWidth, screenHeight, "Recursive Squares - Raylib");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        int x = screenWidth / 4;
        int y = screenHeight / 4;
        int initialSize = 250;
        int n = 5; 

        drawRecursiveSquares(x, y, initialSize, n);

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
