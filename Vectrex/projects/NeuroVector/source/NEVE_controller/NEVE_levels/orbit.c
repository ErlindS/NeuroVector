#include "orbit.h"

int position_coordinate_0 = 0;
int position_coordinate_1 = 128/8 * 1;
int position_coordinate_2 = 128/8 * 2;
int position_coordinate_3 = 128/8 * 3;
int position_coordinate_5 = 128/8 * 4;
int position_coordinate_6 = 128/8 * 5;
int position_coordinate_7 = 128/8 * 6;
int position_coordinate_8 = 128/8 * 7;

#define MAXSIZE 126

void circle_movement(){
    displayed_squares[0].y = circle_value[position_coordinate_0].y;
    displayed_squares[0].x = circle_value[position_coordinate_0].x;
    displayed_squares[1].y = circle_value[position_coordinate_1].y;
    displayed_squares[1].x = circle_value[position_coordinate_1].x;
    displayed_squares[2].y = circle_value[position_coordinate_2].y;
    displayed_squares[2].x = circle_value[position_coordinate_2].x;
    displayed_squares[3].y = circle_value[position_coordinate_3].y;
    displayed_squares[3].x = circle_value[position_coordinate_3].x;
    displayed_squares[5].y = circle_value[position_coordinate_5].y;
    displayed_squares[5].x = circle_value[position_coordinate_5].x;
    displayed_squares[6].y = circle_value[position_coordinate_6].y;
    displayed_squares[6].x = circle_value[position_coordinate_6].x;
    displayed_squares[7].y = circle_value[position_coordinate_7].y;
    displayed_squares[7].x = circle_value[position_coordinate_7].x;
    displayed_squares[8].y = circle_value[position_coordinate_8].y;
    displayed_squares[8].x = circle_value[position_coordinate_8].x;

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
    if(position_coordinate_5 > MAXSIZE) position_coordinate_5 = 0;
    if(position_coordinate_6 > MAXSIZE) position_coordinate_6 = 0;
    if(position_coordinate_7 > MAXSIZE) position_coordinate_7 = 0;
    if(position_coordinate_8 > MAXSIZE) position_coordinate_8 = 0;
}
