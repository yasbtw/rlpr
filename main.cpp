#include <raylib.h>
#include <iostream>

int main(){
    InitWindow(400,400,"Windowzx");
    Texture2D texture = LoadTexture("./textures/Tiles.png");
        Rectangle sourceRec = { 16.0f, 16.0f, 16.0f,16.0f };
                Rectangle destRec = { 0.0f, 0.0f, 32.0f,32.0f };

    while (!WindowShouldClose()){
        BeginDrawing();

        ClearBackground(RAYWHITE);

        DrawText("Congrats",200,200,20,LIGHTGRAY);
        for (int i =0; i<13;i++){
                    for (int y =0; y<13;y++){
                Vector2 pos = {-float(i*32),-float(y*32)};
        DrawTexturePro(texture,sourceRec,destRec, pos,0.0f,WHITE);
        }}
        EndDrawing();
    }
    CloseWindow();

    std::cout << "hello world";
    return 0;
}