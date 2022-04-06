#include "raylib.h"
#include "list.h"
int main()
{ //mingw32-make 
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Music Player");
    buttonSource* bn;
    buttonSource* bn2;
    buttonSource* bn3;
    buttonSource* bn4;
    buttonSource* bn5;
    buttonSource* bn6;
    buttonSource* bn7;
    buttonSource* bn8;
    buttonSource* bn9;
    getButtonSource("resources/play.png");
    getButton2Source("resources/pause.png"); 
    getButton3Source("resources/volumemunis.png");
    getButton4Source("resources/volume.png");
    getButton5Source("resources/left.png");
    getButton6Source("resources/next.png");
    getButton7Source("resources/repeat.png");
    getButton8Source("resources/fast.png");
    getButton9Source("resources/previous.png");
    InitAudioDevice();              
    float pitch = 1.0f;
    float volume = 1.0f;
    float position = 0.3f;
    Music music = LoadMusicStream("resources/2.mp3");
    PlayMusicStream(music);
    float timePlayed = 0.0f;
    float timePlayed_2 = 0.0f;
    float timePlayed_3 = 0.0f;
    bool pause = false;
    SetTargetFPS(60);              
    while (!WindowShouldClose())    
    {
       // mingw32-make  buttonSource * getButtonSource(char* path);
        mousePoint = GetMousePosition();
        btnAction = false;
        UpdateMusicStream(music);   // Update music buffer with new stream data
        if (CheckCollisionPointRec(mousePoint, bn->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            ResumeMusicStream(music);
            btnAction = false;
            btnState = 0;
        }
        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn2->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState= 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState= 0;
        if (btnAction)
        {
            pause = !pause;
            if (pause) PauseMusicStream(music);
            btnAction = false;
            btnState = 0;
        }
        
        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn3->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            
            volume--;
            SetMusicVolume(music, volume);

            btnAction = false;
            btnState = 0;
        }
        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn4->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            
            volume++;
            SetMusicVolume(music, volume);

            btnAction = false;
            btnState = 0;
        }
        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn5->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {
            pitch -= 0.01f;
            SetMusicPitch(music, pitch);

            btnAction = false;
            btnState = 0;
        }

        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn6->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if (btnAction)
        {

           
            pitch += 0.01f;
            SetMusicPitch(music, pitch);

            btnAction = false;
            btnState = 0;
        }
        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn7->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if ((btnAction) || (IsKeyPressed(KEY_SPACE)))
        {
            StopMusicStream(music);
            PlayMusicStream(music);
            
            btnAction = false;
            btnState = 0;
        }
        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn8->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if ((btnAction))
        {
            position++;
            SeekMusicStream(music, position);

            btnAction = false;
            btnState = 0;
        }
        //mingw32-make
        mousePoint = GetMousePosition();
        btnAction = false;
        if (CheckCollisionPointRec(mousePoint, bn9->bounds))
        {
            if (IsMouseButtonDown(MOUSE_BUTTON_LEFT)) btnState = 2;
            else btnState = 1;
            if (IsMouseButtonReleased(MOUSE_BUTTON_LEFT)) btnAction = true;
        }
        else btnState = 0;
        if ((btnAction))
        {

            if(position < 0.05f)  StopMusicStream(music);
                position--;
            SeekMusicStream(music, position);

            btnAction = false;
            btnState = 0;
        }
        timePlayed = GetMusicTimePlayed(music) / GetMusicTimeLength(music) * 400;
        if (timePlayed > 400) StopMusicStream(music);
        if (timePlayed < 0.f)             ResumeMusicStream(music);
        timePlayed_2 = GetMusicTimePlayed(music)/60;
        timePlayed_3 =  (GetMusicTimeLength(music) - GetMusicTimePlayed(music))/60;
        bn->source.y = btnState * ;
        bn2->source.y = btnState * ;
        bn3->source.y = btnState * ;
        bn4->source.y = btnState * ;
        bn5->source.y = btnState * ;
        bn6->source.y = btnState * ;
        bn7->source.y = btnState * ;
        bn8->source.y = btnState * ;
        bn9->source.y = btnState * ;
        GetMusicTimeLength(music);
        BeginDrawing();
        ClearBackground(RAYWHITE);
        DrawText("This is my music player!", 270, 150, 20, LIGHTGRAY);
        DrawText(TextFormat("%.2f", (float)timePlayed_2), 545, 220, 30, BLACK);
        DrawText(TextFormat("%.2f", (float)timePlayed_3), 200, 220, 30, BLACK);
        DrawRectangle(200, 200, 400, 12, LIGHTGRAY);
        DrawRectangle(200, 200, (int)timePlayed, 12, MAROON);
        DrawRectangleLines(200, 200, 400, 12, GRAY);
         //mingw32-make
        DrawTextureRec(bn->texture, bn->source, (Vector2) { bn->bounds.x, bn->bounds.y }, WHITE);
        DrawTextureRec(bn2->texture, bn2->source, (Vector2) { bn2->bounds.x, bn2->bounds.y }, WHITE);
        DrawTextureRec(bn3->texture, bn3->source, (Vector2) { bn3->bounds.x, bn3->bounds.y }, WHITE);
        DrawTextureRec(bn4->texture, bn4->source, (Vector2) { bn4->bounds.x, bn4->bounds.y }, WHITE);
        DrawTextureRec(bn5->texture, bn5->source, (Vector2) { bn5->bounds.x, bn5->bounds.y }, WHITE);
        DrawTextureRec(bn6->texture, bn6->source, (Vector2) { bn6->bounds.x, bn6->bounds.y }, WHITE);
        DrawTextureRec(bn7->texture, bn7->source, (Vector2) { bn7->bounds.x, bn7->bounds.y }, WHITE);
        DrawTextureRec(bn8->texture, bn8->source, (Vector2) { bn8->bounds.x, bn8->bounds.y }, WHITE);
        DrawTextureRec(bn9->texture, bn9->source, (Vector2) { bn9->bounds.x, bn9->bounds.y }, WHITE);
        EndDrawing();
    }
       ClearBackground(RAYWHITE);
        UnloadMusicStream(music);
        UnloadTexture(bn->texture);
            UnloadTexture(bn2->texture);
            UnloadTexture(bn3->texture);
            UnloadTexture(bn4->texture);
            UnloadTexture(bn5->texture);
            UnloadTexture(bn6->texture);
            UnloadTexture(bn7->texture);
            UnloadTexture(bn8->texture);
            UnloadTexture(bn9->texture);
        CloseAudioDevice();        
        CloseWindow();             
    return 0;
}

