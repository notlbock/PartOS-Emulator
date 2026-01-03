#include <raylib.h>

/*
UPDATES:
Simple for now for testing.
*/

int main()
{
  InitWindow(800, 600, "Emulator"); // create the window
  SetTargetFPS(20); // 20 FPS for light weight

  // initate colors
  Color backgroundColor = {0, 0, 255, 255}; // background color
  
  // main loop
  while (!WindowShouldClose())
  {
    BeginDrawing(); // start drawing

    ClearBackground(backgroundColor); // set background color
    
    EndDrawing(); // end drawing
  }
  CloseWindow(); // close the window
  return 0; // success
}
