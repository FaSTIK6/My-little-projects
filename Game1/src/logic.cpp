#include <logic.hpp>
#include <variables.hpp>
#include <raylib.h>

void gameLogic() {
    
    if (IsMouseButtonPressed(MOUSE_LEFT_BUTTON)) {
        if (CheckCollisionPointCircle(mouse, circlePos, circleRadius)) {
            score += scoree[updateOneScore];
        }

        if (CheckCollisionPointRec(mouse, buttonOnePos)) {
                if (score >= costIndex && updateOneButtonLVL <= 20) {
                score -= costIndex;
                updateOneButtonLVL++;
                updateOneScore++;
            }
        }

        if (CheckCollisionPointRec(mouse, buttonShopPos)) shopBool = true;
        if (CheckCollisionPointRec(mouse, buttonShopClose)) shopBool = false;
    }
}