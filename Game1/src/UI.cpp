#include <variables.hpp>
#include <raylib.h>
#include <UI.hpp>
#include <string>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;
using namespace std;

void InitUIVariables() {
    background = LoadTexture("assets/background.png");
    shop = LoadTexture("assets/shop.png");
    nespat = LoadTexture("assets/nespat.png");

    costIndex = cost1[updateOneButtonLVL];
    income = scoree[updateOneScore];
}
void UI() {
    if(!shopBool) {
        DrawTexture(background, 0, 0, WHITE);
        if(score >= costIndex)
            DrawTexture(nespat, 60, 750, WHITE);
    }
    else {
        DrawTexture(shop, 0, 0, WHITE);

        if(updateOneButtonLVL < buttonOneMax) {
            DrawText(("LVL: " + to_string(updateOneButtonLVL)).c_str(), 185, 235, 30, BLACK);
            DrawRectangleRounded(buttonOnePos, 0.2f, 30, score >= costIndex ? GREEN : RED);
            DrawText("Buy?", 700, 255, 50, BLACK);
            DrawText(("cost: " + to_string(costIndex)).c_str(), 185, 270, 25, BLACK);
            DrawText(("Income: " + to_string(scoree[updateOneScore])).c_str(), 185, 295, 25, BLACK);
            }
        else {
            DrawText(("Income: " + to_string(scoree[updateOneScore])).c_str(), 185, 270, 25, BLACK);
            DrawRectangleRounded(buttonOnePos, 0.2f, 30, LIGHTGRAY);
             DrawText("LVL: MAX.", 185, 235, 30, BLACK);
            DrawText("MAX.", 700, 255, 50, BLACK);
        }
    }

    DrawText(("Money: " + score.convert_to<string>()).c_str(), 160, 75, 30, DARKGRAY);
}