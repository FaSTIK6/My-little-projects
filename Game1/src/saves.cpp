#include <raylib.h>
#include <fstream>
#include <saves.hpp>
#include <variables.hpp>
using namespace std;

void incomeSave(int updateOneScore) {
    ofstream file("income.txt");
    if (file.is_open()) file << updateOneScore;
}

void incomeLoad(int &updateOneScore) {
    ifstream file("income.txt");
    if (!file)
    {
        TraceLog(LOG_INFO, "Failed to load income!");
        return;
    }
    file >> updateOneScore;
}

void scoreSave(cpp_int &score) {
    ofstream file("score.txt");
    if(file.is_open()) file << score;
}

void scoreLoad(cpp_int &score) {
    ifstream file("score.txt");
    if(!file)
    {
        TraceLog(LOG_INFO, "Failed to load score!");
        return;
    }
    file >> score;
}

void LVLOneSave(int &updateOneButtonLVL) {
    ofstream file("LVLOneButton.txt");
    if(file.is_open()) file << updateOneButtonLVL;
}

void LVLOneLoad(int &updateOneButtonLVL) {
    ifstream file("LVLOneButton.txt");
    if(!file)
    {
        TraceLog(LOG_INFO, "Failed to load level!");
        return;
    }
    file >> updateOneButtonLVL;
}

void saveAll() {
    scoreSave(score);
    LVLOneSave(updateOneButtonLVL);
    incomeSave(income);
}

void loadAll() {
    incomeLoad(updateOneScore);
    scoreLoad(score);
    LVLOneLoad(updateOneButtonLVL);
}