#include "anti_movement.h"

int position_coordinate_0 = 0;
int position_coordinate_1 = 128/8 * 2;
int position_coordinate_2 = 128/8 * 4;
int position_coordinate_3 = 128/8 * 6;
int position_coordinate_5 = 128/8 * 1;
int position_coordinate_6 = 128/8 * 3;
int position_coordinate_7 = 128/8 * 5;
int position_coordinate_8 = 128/8 * 7;

#define MAXSIZE 126

const struct vector_t rectangle[] = 
{
{64, -64},
{64, -60},
{64, -56},
{64, -52},
{64, -47},
{64, -43},
{64, -39},
{64, -35},
{64, -31},
{64, -27},
{64, -23},
{64, -19},
{64, -14},
{64, -10},
{64, -6},
{64, -2},
{64, 2},
{64, 6},
{64, 10},
{64, 14},
{64, 19},
{64, 23},
{64, 27},
{64, 31},
{64, 35},
{64, 39},
{64, 43},
{64, 47},
{64, 52},
{64, 56},
{64, 60},
{64, 64},
{64, 64},
{60, 64},
{56, 64},
{52, 64},
{47, 64},
{43, 64},
{39, 64},
{35, 64},
{31, 64},
{27, 64},
{23, 64},
{19, 64},
{14, 64},
{10, 64},
{6, 64},
{2, 64},
{-2, 64},
{-6, 64},
{-10, 64},
{-14, 64},
{-19, 64},
{-23, 64},
{-27, 64},
{-31, 64},
{-35, 64},
{-39, 64},
{-43, 64},
{-47, 64},
{-52, 64},
{-56, 64},
{-60, 64},
{-64, 64},
{-64, 64},
{-64, 60},
{-64, 56},
{-64, 52},
{-64, 47},
{-64, 43},
{-64, 39},
{-64, 35},
{-64, 31},
{-64, 27},
{-64, 23},
{-64, 19},
{-64, 14},
{-64, 10},
{-64, 6},
{-64, 2},
{-64, -2},
{-64, -6},
{-64, -10},
{-64, -14},
{-64, -19},
{-64, -23},
{-64, -27},
{-64, -31},
{-64, -35},
{-64, -39},
{-64, -43},
{-64, -47},
{-64, -52},
{-64, -56},
{-64, -60},
{-64, -64},
{-64, -64},
{-60, -64},
{-56, -64},
{-52, -64},
{-47, -64},
{-43, -64},
{-39, -64},
{-35, -64},
{-31, -64},
{-27, -64},
{-23, -64},
{-19, -64},
{-14, -64},
{-10, -64},
{-6, -64},
{-2, -64},
{2, -64},
{6, -64},
{10, -64},
{14, -64},
{19, -64},
{23, -64},
{27, -64},
{31, -64},
{35, -64},
{39, -64},
{43, -64},
{47, -64},
{52, -64},
{56, -64},
{60, -64},
{64, -64}
};

const struct vector_t rectangle_rot[] = 
{
{64, 0},
{62, -2},
{60, -4},
{58, -6},
{56, -8},
{54, -10},
{52, -12},
{50, -14},
{47, -17},
{45, -19},
{43, -21},
{41, -23},
{39, -25},
{37, -27},
{35, -29},
{33, -31},
{31, -33},
{29, -35},
{27, -37},
{25, -39},
{23, -41},
{21, -43},
{19, -45},
{17, -47},
{14, -50},
{12, -52},
{10, -54},
{8, -56},
{6, -58},
{4, -60},
{2, -62},
{0, -64},
{0, -64},
{-2, -62},
{-4, -60},
{-6, -58},
{-8, -56},
{-10, -54},
{-12, -52},
{-14, -50},
{-17, -47},
{-19, -45},
{-21, -43},
{-23, -41},
{-25, -39},
{-27, -37},
{-29, -35},
{-31, -33},
{-33, -31},
{-35, -29},
{-37, -27},
{-39, -25},
{-41, -23},
{-43, -21},
{-45, -19},
{-47, -17},
{-50, -14},
{-52, -12},
{-54, -10},
{-56, -8},
{-58, -6},
{-60, -4},
{-62, -2},
{-64, 0},
{-64, 0},
{-62, 2},
{-60, 4},
{-58, 6},
{-56, 8},
{-54, 10},
{-52, 12},
{-50, 14},
{-47, 17},
{-45, 19},
{-43, 21},
{-41, 23},
{-39, 25},
{-37, 27},
{-35, 29},
{-33, 31},
{-31, 33},
{-29, 35},
{-27, 37},
{-25, 39},
{-23, 41},
{-21, 43},
{-19, 45},
{-17, 47},
{-14, 50},
{-12, 52},
{-10, 54},
{-8, 56},
{-6, 58},
{-4, 60},
{-2, 62},
{0, 64},
{0, 64},
{2, 62},
{4, 60},
{6, 58},
{8, 56},
{10, 54},
{12, 52},
{14, 50},
{17, 47},
{19, 45},
{21, 43},
{23, 41},
{25, 39},
{27, 37},
{29, 35},
{31, 33},
{33, 31},
{35, 29},
{37, 27},
{39, 25},
{41, 23},
{43, 21},
{45, 19},
{47, 17},
{50, 14},
{52, 12},
{54, 10},
{56, 8},
{58, 6},
{60, 4},
{62, 2},
{64, 0}
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
