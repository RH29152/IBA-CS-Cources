#include <raylib.h>
#include <cmath>


double eval(double t, int k) {
    double result = 0.0;
    
    for (int i = 1; i <= k; i++) {
        result += sin(i * t) / i;
    }
    
    return result * (2.0 / 3.142);
}

int main() {

    int screenWidth = 800;
    int screenHeight = 400;
    InitWindow(screenWidth, screenHeight, "Sawtooth Wave Plot");
    SetTargetFPS(60);

    int k = 10; 

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        for (int x = 0; x < screenWidth; x++) {
            double t = 6.0 * 3.142 * x / screenWidth;
            double y = eval(t, k);
            int yPosition = (int)((y + 1.0) * (screenHeight / 2));
            DrawPixel(x, yPosition, RED);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}
