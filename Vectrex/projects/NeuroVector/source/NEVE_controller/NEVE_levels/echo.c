#include "echo.h"

static int position_coordinate_0 = 0;
static int position_coordinate_1 = 128/8 * 2;
static int position_coordinate_2 = 128/8 * 4;
static int position_coordinate_3 = 128/8 * 6;
static int position_coordinate_5 = 128/8 * 1;
static int position_coordinate_6 = 128/8 * 3;
static int position_coordinate_7 = 128/8 * 5;
static int position_coordinate_8 = 128/8 * 7;

#define MAXSIZE 126

const struct vector_t rectangle[] = 
{
{120, -120},
{120, -112},
{120, -105},
{120, -97},
{120, -89},
{120, -81},
{120, -74},
{120, -66},
{120, -58},
{120, -50},
{120, -43},
{120, -35},
{120, -27},
{120, -19},
{120, -12},
{120, -4},
{120, 4},
{120, 12},
{120, 19},
{120, 27},
{120, 35},
{120, 43},
{120, 50},
{120, 58},
{120, 66},
{120, 74},
{120, 81},
{120, 89},
{120, 97},
{120, 105},
{120, 112},
{120, 120},
{120, 120},
{112, 120},
{105, 120},
{97, 120},
{89, 120},
{81, 120},
{74, 120},
{66, 120},
{58, 120},
{50, 120},
{43, 120},
{35, 120},
{27, 120},
{19, 120},
{12, 120},
{4, 120},
{-4, 120},
{-12, 120},
{-19, 120},
{-27, 120},
{-35, 120},
{-43, 120},
{-50, 120},
{-58, 120},
{-66, 120},
{-74, 120},
{-81, 120},
{-89, 120},
{-97, 120},
{-105, 120},
{-112, 120},
{-120, 120},
{-120, 120},
{-120, 112},
{-120, 105},
{-120, 97},
{-120, 89},
{-120, 81},
{-120, 74},
{-120, 66},
{-120, 58},
{-120, 50},
{-120, 43},
{-120, 35},
{-120, 27},
{-120, 19},
{-120, 12},
{-120, 4},
{-120, -4},
{-120, -12},
{-120, -19},
{-120, -27},
{-120, -35},
{-120, -43},
{-120, -50},
{-120, -58},
{-120, -66},
{-120, -74},
{-120, -81},
{-120, -89},
{-120, -97},
{-120, -105},
{-120, -112},
{-120, -120},
{-120, -120},
{-112, -120},
{-105, -120},
{-97, -120},
{-89, -120},
{-81, -120},
{-74, -120},
{-66, -120},
{-58, -120},
{-50, -120},
{-43, -120},
{-35, -120},
{-27, -120},
{-19, -120},
{-12, -120},
{-4, -120},
{4, -120},
{12, -120},
{19, -120},
{27, -120},
{35, -120},
{43, -120},
{50, -120},
{58, -120},
{66, -120},
{74, -120},
{81, -120},
{89, -120},
{97, -120},
{105, -120},
{112, -120},
{120, -120}
};

const struct vector_t rectangle_rot[] = 
{
{120, 0},
{116, -4},
{112, -8},
{108, -12},
{105, -15},
{101, -19},
{97, -23},
{93, -27},
{89, -31},
{85, -35},
{81, -39},
{77, -43},
{74, -46},
{70, -50},
{66, -54},
{62, -58},
{58, -62},
{54, -66},
{50, -70},
{46, -74},
{43, -77},
{39, -81},
{35, -85},
{31, -89},
{27, -93},
{23, -97},
{19, -101},
{15, -105},
{12, -108},
{8, -112},
{4, -116},
{0, -120},
{0, -120},
{-4, -116},
{-8, -112},
{-12, -108},
{-15, -105},
{-19, -101},
{-23, -97},
{-27, -93},
{-31, -89},
{-35, -85},
{-39, -81},
{-43, -77},
{-46, -74},
{-50, -70},
{-54, -66},
{-58, -62},
{-62, -58},
{-66, -54},
{-70, -50},
{-74, -46},
{-77, -43},
{-81, -39},
{-85, -35},
{-89, -31},
{-93, -27},
{-97, -23},
{-101, -19},
{-105, -15},
{-108, -12},
{-112, -8},
{-116, -4},
{-120, 0},
{-120, 0},
{-116, 4},
{-112, 8},
{-108, 12},
{-105, 15},
{-101, 19},
{-97, 23},
{-93, 27},
{-89, 31},
{-85, 35},
{-81, 39},
{-77, 43},
{-74, 46},
{-70, 50},
{-66, 54},
{-62, 58},
{-58, 62},
{-54, 66},
{-50, 70},
{-46, 74},
{-43, 77},
{-39, 81},
{-35, 85},
{-31, 89},
{-27, 93},
{-23, 97},
{-19, 101},
{-15, 105},
{-12, 108},
{-8, 112},
{-4, 116},
{0, 120},
{0, 120},
{4, 116},
{8, 112},
{12, 108},
{15, 105},
{19, 101},
{23, 97},
{27, 93},
{31, 89},
{35, 85},
{39, 81},
{43, 77},
{46, 74},
{50, 70},
{54, 66},
{58, 62},
{62, 58},
{66, 54},
{70, 50},
{74, 46},
{77, 43},
{81, 39},
{85, 35},
{89, 31},
{93, 27},
{97, 23},
{101, 19},
{105, 15},
{108, 12},
{112, 8},
{116, 4},
{120, 0}
};


void circle_movement2(){
    displayed_squares[1].y = rectangle[position_coordinate_0].y;
    displayed_squares[1].x = rectangle[position_coordinate_0].x;
    displayed_squares[3].y = rectangle[position_coordinate_1].y;
    displayed_squares[3].x = rectangle[position_coordinate_1].x;
    displayed_squares[5].y = rectangle[position_coordinate_2].y;
    displayed_squares[5].x = rectangle[position_coordinate_2].x;
    displayed_squares[7].y = rectangle[position_coordinate_3].y;
    displayed_squares[7].x = rectangle[position_coordinate_3].x;
    //displayed_squares[4].y = circle_val2ue[position_coordinate_4].y;
    //displayed_squares[4].x = circle_val2ue[position_coordinate_4].x;
    displayed_squares[0].y = rectangle_rot[position_coordinate_5].y;
    displayed_squares[0].x = rectangle_rot[position_coordinate_5].x;
    displayed_squares[2].y = rectangle_rot[position_coordinate_6].y;
    displayed_squares[2].x = rectangle_rot[position_coordinate_6].x;
    displayed_squares[6].y = rectangle_rot[position_coordinate_7].y;
    displayed_squares[6].x = rectangle_rot[position_coordinate_7].x;
    displayed_squares[8].y = rectangle_rot[position_coordinate_8].y;
    displayed_squares[8].x = rectangle_rot[position_coordinate_8].x;

    ++position_coordinate_0;
    ++position_coordinate_1;
    ++position_coordinate_2;
    ++position_coordinate_3;
    ++position_coordinate_6;
    ++position_coordinate_5;
    ++position_coordinate_7;
    ++position_coordinate_8;

    if(position_coordinate_0 > MAXSIZE) position_coordinate_0 = 0;
    if(position_coordinate_1 > MAXSIZE) position_coordinate_1 = 0;
    if(position_coordinate_2 > MAXSIZE) position_coordinate_2 = 0;
    if(position_coordinate_3 > MAXSIZE) position_coordinate_3 = 0;
    //if(position_coordinate_4 > MAXSIZE) position_coordinate_4 = 0;
    if(position_coordinate_5 > MAXSIZE) position_coordinate_5 = 0;
    if(position_coordinate_6 > MAXSIZE) position_coordinate_6 = 0;
    if(position_coordinate_7 > MAXSIZE) position_coordinate_7 = 0;
    if(position_coordinate_8 > MAXSIZE) position_coordinate_8 = 0;
}
