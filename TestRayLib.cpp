#include <iostream>
#include "raylib.h"


int main()
{

    int WIDTH = 600;
    int HEIGHT = 600;
    const char* title = "MyGameTest";

    InitWindow(WIDTH, HEIGHT, title);

    Camera3D camera = { 0 };
    camera.position = { 0.0f, 10.0f, 10.0f };
    camera.target = { 0.0f, 0.0f, 0.0f };
    camera.up = { 0.0f, 1.0f, 0.0f };
    camera.fovy = 45.0f;


    SetTargetFPS(60);

    while (!WindowShouldClose()){
        BeginDrawing();

            ClearBackground(RAYWHITE);

               BeginMode3D(camera);

                DrawCube({ 0.0f,0.0f,0.0f }, 2.0f, 2.0f, 2.0f, RED);
                DrawSphere({2.0f, 2.0f, 2.0f}, 1.0f, BLUE);
                DrawCubeWires({ 0.0f,0.0f,0.0f }, 2.0f, 2.0f, 2.0f, BLACK);

               EndMode3D();
            

        EndDrawing();

    }
    CloseWindow();

    std::cout << "Hello RayLib!!\n";
}
