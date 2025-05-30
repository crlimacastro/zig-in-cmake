#include <raylib.h>

auto main() -> int
{
    SetConfigFlags(FLAG_WINDOW_RESIZABLE);
    InitWindow(800, 450, "raylib [core] example - basic window");

    while (!WindowShouldClose())
    {
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("Congrats! You compiled this program with the zig compiler!", 190, 200, 20, BLACK);
        EndDrawing();
    }
    CloseWindow();
}
