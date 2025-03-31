#include <raylib.h>

auto main() -> int
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You created your first window!", 190, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
}
