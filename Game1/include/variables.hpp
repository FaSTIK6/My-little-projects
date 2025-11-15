#pragma once
#include <raylib.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

extern Vector2 mouse;
extern Vector2 circlePos;
extern Rectangle buttonShopPos;
extern Rectangle buttonShopClose;
extern Rectangle buttonOnePos;
extern float circleRadius;
extern Texture2D background;
extern Texture2D shop;
extern Texture2D nespat;

extern cpp_int score;
extern int updateOneScore;
extern int updateOneButtonLVL;
extern int cost1[22];
extern int scoree[22];
extern int costIndex;
extern int buttonOneMax;
extern bool shopBool;
extern int income;