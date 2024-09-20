#include "raylib.h"
#include <ctime>
#include<iostream>
#include<cstdlib>

int main() {
  
    int screenWidth = 800;
    int screenHeight = 800;
    InitWindow(screenWidth, screenHeight, "Random Circles");

    int numCircles;
    float probabilityBlack;
    float minRadius;
    float maxRadius;

    cout<<"Enter the number of circles:"<<std::endl;
    cin>>numCircles;
    cout<<"Enter the probability that each circle is black (0-1): "<<std::endl;
    cin>>probabilityBlack;
    cout<<"Enter the minimum radius: "<<std::endl;
    cin>>minRadius;
    cout<<"Enter the maximum radius: "<<std::endl;
    cin>>maxRadius;

    while (!WindowShouldClose()) {
        BeginDrawing();
        ClearBackground(RAYWHITE);

        for (int i = 0; i < numCircles; i++) {
            float posX = static_cast<float>(rand() % screenWidth);
            float posY = static_cast<float>(rand() % screenHeight);
            float radius = static_cast<float>(rand() % static_cast<int>(maxRadius - minRadius + 1) + minRadius);

            int colorValue = rand() % 100;
            Color color;

            if (colorValue < static_cast<int>(probabilityBlack * 100)) {
                color = BLACK;
            } else {
                color = WHITE;
            }

            DrawCircle(posX, posY, radius, color);
        }

        EndDrawing();
    }

    CloseWindow();

    return 0;
}