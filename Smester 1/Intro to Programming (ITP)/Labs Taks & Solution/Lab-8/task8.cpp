#include "raylib.h"
#include <cmath>

void DrawEquilateralTriangle(float x, float y, float s, Color color) {
    float sqrt3 = sqrt(3);

    float Ax = x;
    float Ay = y - (sqrt3 / 2) * s;
    float Bx = x - s / 2;
    float By = y + (sqrt3 / 6) * s;
    float Cx = x + s / 2;
    float Cy = y + (sqrt3 / 6) * s;

    DrawLine(Ax, Ay, Bx, By, color);
    DrawLine(Bx, By, Cx, Cy, color);
    DrawLine(Cx, Cy, Ax, Ay, color);
}

int main() {
    const int screenWidth = 800;
    const int screenHeight = 600;

    InitWindow(screenWidth, screenHeight, "Equilateral Triangle Pattern");

    SetTargetFPS(60);

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(BLACK);

        for (int i = 0; i < screenWidth; i += 50) {
            for (int j = 0; j < screenHeight; j += 50) {
                DrawEquilateralTriangle(i, j, 40, WHITE);
            }
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
