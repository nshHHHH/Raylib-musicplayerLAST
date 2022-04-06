#include "raylib.h"
#include <cstdlib>

int btnState = 0;
bool btnAction = false;
Vector2 mousePoint = { 0.0f, 0.0f };

typedef struct
{
    Texture2D texture;
    Rectangle source;
    Rectangle bounds;
} buttonSource;

buttonSource* getButtonSource(const char* path)
{
    buttonSource* bn = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    InitWindow(screenWidth, screenHeight, "Music Player");
    bn->texture = LoadTexture(path);
    float frameHeight = (float)bn->texture.height;
    bn->source = { 0, 0, (float)bn->texture.width, frameHeight };
    bn->bounds = { screenWidth / 2.2f - bn->texture.width / 2.5f, screenHeight / 1.8f - bn->texture.height / 3.0f, (float)bn->texture.width, frameHeight };
    return bn;
}
buttonSource* getButton2Source(const char* path2)
{
    buttonSource* bn2 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn2->texture = LoadTexture(path2);
    float frameHeight2 = (float)bn2->texture.height;
    bn2->source = { 0, 0, (float)bn2->texture.width, frameHeight2 };
    bn2->bounds = { screenWidth / 2.0f - bn2->texture.width / 2.5f, screenHeight / 1.8f - bn2->texture.height / 3.0f, (float)bn2->texture.width, frameHeight2 };
    return bn2;
}
buttonSource* getButton3Source(const char* path3)
{
    buttonSource* bn3 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn3->texture = LoadTexture(path3);
    float frameHeight3 = (float)bn3->texture.height;
    bn3->source = { 0, 0, (float)bn3->texture.width, frameHeight3 };
    bn3->bounds = { screenWidth / 2.5f - bn3->texture.width / 2.5f, screenHeight / 1.8f - bn3->texture.height / 3.0f, (float)bn3->texture.width, frameHeight3 };
    return bn3;
}

buttonSource* getButton4Source(const char* path4)
{
    buttonSource* bn4 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn4->texture = LoadTexture(path4);
    float frameHeight4 = (float)bn4->texture.height;
    bn4->source = { 0, 0, (float)bn4->texture.width, frameHeight4 };
    bn4->bounds = { screenWidth / 1.8f - bn4->texture.width / 2.5f, screenHeight / 1.8f - bn4->texture.height / 3.0f, (float)bn4->texture.width, frameHeight4 };
    return bn4;
}
buttonSource* getButton5Source(const char* path5)
{
    buttonSource* bn5 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn5->texture = LoadTexture(path5);
    float frameHeight5 = (float)bn5->texture.height;
    bn5->source = { 0, 0, (float)bn5->texture.width, frameHeight5 };
    bn5->bounds = { screenWidth / 2.2f - bn5->texture.width / 2.5f, screenHeight / 1.4f - bn5->texture.height / 3.0f, (float)bn5->texture.width, frameHeight5 };
    return bn5;
}
buttonSource* getButton6Source(const char* path6)
{
    buttonSource* bn6 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn6->texture = LoadTexture(path6);
    float frameHeight6 = (float)bn6->texture.height;
    bn6->source = { 0, 0, (float)bn6->texture.width, frameHeight6 };
    bn6->bounds = { screenWidth / 2.0f - bn6->texture.width / 2.5f, screenHeight / 1.4f - bn6->texture.height / 3.0f, (float)bn6->texture.width, frameHeight6 };
    return bn6;
}
buttonSource* getButton7Source(const char* path7)
{
    buttonSource* bn7 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn7->texture = LoadTexture(path7);
    float frameHeight7 = (float)bn7->texture.height;
    bn7->source = { 0, 0, (float)bn7->texture.width, frameHeight7 };
    bn7->bounds = { screenWidth / 2.1f - bn7->texture.width / 2.5f, screenHeight / 1.6f - bn7->texture.height / 3.0f, (float)bn7->texture.width, frameHeight7 };
    return bn7;
}
buttonSource* getButton8Source(const char* path8)
{
    buttonSource* bn8 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn8->texture = LoadTexture(path8);
    float frameHeight8 = (float)bn8->texture.height;
    bn8->source = { 0, 0, (float)bn8->texture.width, frameHeight8 };
    bn8->bounds = { screenWidth / 1.93f - bn8->texture.width / 2.5f, screenHeight / 1.6f - bn8->texture.height / 3.0f, (float)bn8->texture.width, frameHeight8 };
    return bn8;
}

buttonSource* getButton9Source(const char* path9)
{
    buttonSource* bn9 = (buttonSource*)malloc(sizeof(buttonSource));
    const int screenWidth = 800;
    const int screenHeight = 450;
    bn9->texture = LoadTexture(path9);
    float frameHeight9 = (float)bn9->texture.height;
    bn9->source = { 0, 0, (float)bn9->texture.width, frameHeight9 };
    bn9->bounds = { screenWidth / 2.3f - bn9->texture.width / 2.5f, screenHeight / 1.6f - bn9->texture.height / 3.0f, (float)bn9->texture.width, frameHeight9 };
    return bn9;
}
