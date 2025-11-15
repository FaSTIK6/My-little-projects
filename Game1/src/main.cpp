#include "raylib.h"
#include <fstream>
#include <variables.hpp>
#include <logic.hpp>
#include <UI.hpp>
#include <saves.hpp>
#include <boost/multiprecision/cpp_int.hpp>
#include <string>
using namespace std;
using namespace boost::multiprecision;

void Restart(cpp_int &score, int &updateOneButtonLVL, int &updateOneScore) {
    if(IsKeyPressed(KEY_R))
    {
        score = 0;
        updateOneButtonLVL = 1;
        updateOneScore = 1;
    }
}

int main()
{
    const int screenWidth = 900;
    const int screenHeight = 900;
    InitWindow(screenWidth, screenHeight, "Tycoon game.");
    InitUIVariables();
    SetTargetFPS(60);

    loadAll();

    updateOneScore = updateOneButtonLVL;
    income = scoree[updateOneScore];

    while (!WindowShouldClose())
    {
        Restart(score, updateOneButtonLVL, updateOneScore);

        income = scoree[updateOneScore];
        mouse = GetMousePosition();
        costIndex = cost1[updateOneButtonLVL];

        gameLogic();

        BeginDrawing();
        ClearBackground(WHITE);

        UI();

        EndDrawing();
    }

    saveAll();
    UnloadTexture(background);
    UnloadTexture(shop);
    UnloadTexture(nespat);
    CloseWindow();
    return 0;
}