#include <raylib.h>
#include <boost/multiprecision/cpp_int.hpp>
using namespace boost::multiprecision;

Texture2D background;
Texture2D shop;
Texture2D nespat;
Vector2 circlePos = {452.0f, 518.0f};
Rectangle buttonShopPos = {22.0f, 782.0f, 96.0f, 96.0f};
Rectangle buttonShopClose = {785.0f, 27.0f, 90.0f, 90.0f};
Rectangle buttonOnePos = {650.0f, 226.0f, 220.0f, 111.0f};
float circleRadius = 131.0f;

Vector2 mouse = GetMousePosition();
cpp_int score = 0;
int updateOneScore = 1;
int updateOneButtonLVL = 1;
int cost1[22] = {0, 100, 200, 1000, 3000, 9000, 12000, 15000, 30000, 45000,
                  50000, 70000, 100000, 150000, 200000, 210000, 250000, 1000000,
                  1500000, 200000, 2500000, 5000000};
int scoree[22] = {0, 1, 3, 5, 7, 15, 40, 50, 60, 65, 80, 100, 110, 140, 160,
                  165, 170, 174, 180, 181, 185, 200};
int costIndex;
int income;
int buttonOneMax = 21;
bool shopBool = false;