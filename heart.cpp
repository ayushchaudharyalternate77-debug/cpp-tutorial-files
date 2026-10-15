#include "raylib.h"
int main(){
    lnitwindow(800,600,"Red Heart");
    SetTaegetFPS(60);
    while(!WindowShouldClose()){
        BeingDrawing();
        ClearBackground(Black);
        //Red Heart
        DrawCircle(350,270,100,RED);
        DreawCircle(450,270,100,RED);
        Vector2 points[]={
            {250,280}
            {550,280}
            {400,500}

        };
        DrawTriangle(points[0],points[1],points[2],RED);
        EndDrawing();

    }
    CloseWindow();
    return 0;
}