// ---------------------------------------------------------------------------
// Extrem
//
// Filename: extrem.c
// Description: Manages the functions needed for the extrem mode.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------


#include "mirror.h"

int flip_sign;
/*
#define UPDATE_COORDINATES(coordinates, change) \
	do { \
	(coordinates) += (change); \
	flip_sign = (((coordinates) > 120) | ((coordinates) < -120)); \
	change = flip_sign?change*-1:change; \
	} while(0); 
*/
void update_coordinates_fkt(){
    displayed_squares[0].x += displayed_squares[0].change_of_x;
    if(displayed_squares[0].x>>2 > 100 || displayed_squares[0].x>>2 < -100 ) displayed_squares[0].change_of_x * -1;

    displayed_squares[1].x += displayed_squares[1].change_of_x;
    if(displayed_squares[1].x>>2 > 100 || displayed_squares[1].x>>2 < -100) displayed_squares[1].change_of_x * -1;

    displayed_squares[2].x += displayed_squares[2].change_of_x;
    if(displayed_squares[2].x>>2 > 100 || displayed_squares[2].x>>2 < -100) displayed_squares[2].change_of_x * -1;

    displayed_squares[3].x += displayed_squares[3].change_of_x;
    if(displayed_squares[3].x>>2 > 100 || displayed_squares[3].x>>2 < -100) displayed_squares[3].change_of_x * -1;

    displayed_squares[4].x += displayed_squares[4].change_of_x;
    if(displayed_squares[4].x>>2 > 100 || displayed_squares[4].x>>2 < -100) displayed_squares[4].change_of_x * -1;

    displayed_squares[5].x += displayed_squares[5].change_of_x;
    if(displayed_squares[5].x>>2 > 100 || displayed_squares[5].x>>2 < -100) displayed_squares[5].change_of_x * -1;

    displayed_squares[6].x += displayed_squares[6].change_of_x;
    if(displayed_squares[6].x>>2 > 100 || displayed_squares[6].x>>2 < -100) displayed_squares[6].change_of_x * -1;

    displayed_squares[7].x += displayed_squares[7].change_of_x;
    if(displayed_squares[7].x>>2 > 100 || displayed_squares[7].x>>2 < -100) displayed_squares[7].change_of_x * -1;

    displayed_squares[8].x += displayed_squares[8].change_of_x;
    if(displayed_squares[8].x>>2 > 100 || displayed_squares[8].x>>2 < -100) displayed_squares[8].change_of_x * -1;

    displayed_squares[0].y += displayed_squares[0].change_of_y;
    if(displayed_squares[0].y>>2 > 100 || displayed_squares[0].y>>2 < -100) displayed_squares[0].change_of_y * -1;

    displayed_squares[1].y += displayed_squares[1].change_of_y;
    if(displayed_squares[1].y>>2 > 100 || displayed_squares[1].y>>2 < -100) displayed_squares[1].change_of_y * -1;

    displayed_squares[2].y += displayed_squares[2].change_of_y;
    if(displayed_squares[2].y>>2 > 100 || displayed_squares[2].y>>2 < -100) displayed_squares[2].change_of_y * -1;

    displayed_squares[3].y += displayed_squares[3].change_of_y;
    if(displayed_squares[3].y>>2 > 100 || displayed_squares[3].y>>2 < -100) displayed_squares[3].change_of_y * -1;
    displayed_squares[4].y += displayed_squares[4].change_of_y;
    if(displayed_squares[4].y>>2 > 100 || displayed_squares[4].y>>2 < -100) displayed_squares[4].change_of_y * -1;

    displayed_squares[5].y += displayed_squares[5].change_of_y;
    if(displayed_squares[5].y>>2 > 100 || displayed_squares[5].y>>2 < -100) displayed_squares[5].change_of_y * -1;

    displayed_squares[6].y += displayed_squares[6].change_of_y;
    if(displayed_squares[6].y>>2 > 100 || displayed_squares[6].y>>2 < -100) displayed_squares[6].change_of_y * -1;

    displayed_squares[7].y += displayed_squares[7].change_of_y;
    if(displayed_squares[7].y>>2 > 100 || displayed_squares[7].y>>2 < -100) displayed_squares[7].change_of_y * -1;

    displayed_squares[8].y += displayed_squares[8].change_of_y;
    if(displayed_squares[8].y>>2 > 100 || displayed_squares[8].y>>2 < -100) displayed_squares[8].change_of_y * -1;
}

void update_coordinates_fkt2(){
    displayed_squares[0].x += 1;
    displayed_squares[1].x += 1;
    displayed_squares[2].x += 1;
    displayed_squares[3].x += 1;
    displayed_squares[4].x += 1;
    displayed_squares[5].x += 1;
    displayed_squares[6].x += 1;
    displayed_squares[7].x += 1;
    displayed_squares[8].x += 1;

    displayed_squares[0].y += 1;
    displayed_squares[1].y += 1;
    displayed_squares[2].y += 1;
    displayed_squares[3].y += 1;
    displayed_squares[4].y += 1;
    displayed_squares[5].y += 1;
    displayed_squares[6].y += 1;
    displayed_squares[7].y += 1;
    displayed_squares[8].y += 1;
}

#define MaxValue 85

void Add_Movement()
{
    //update_coordinates_fkt();

    displayed_squares[0].x += displayed_squares[0].change_of_x;
    if(displayed_squares[0].x > MaxValue || displayed_squares[0].x < -MaxValue ) displayed_squares[0].change_of_x *= -1;

    displayed_squares[1].x += displayed_squares[1].change_of_x;
    if(displayed_squares[1].x > MaxValue || displayed_squares[1].x < -MaxValue) displayed_squares[1].change_of_x *= -1;

    displayed_squares[2].x += displayed_squares[2].change_of_x;
    if(displayed_squares[2].x > MaxValue || displayed_squares[2].x < -MaxValue) displayed_squares[2].change_of_x *= -1;

    displayed_squares[3].x += displayed_squares[3].change_of_x;
    if(displayed_squares[3].x > MaxValue || displayed_squares[3].x < -MaxValue) displayed_squares[3].change_of_x *= -1;

    displayed_squares[4].x += displayed_squares[4].change_of_x;
    if(displayed_squares[4].x > MaxValue || displayed_squares[4].x < -MaxValue) displayed_squares[4].change_of_x *= -1;

    displayed_squares[5].x += displayed_squares[5].change_of_x;
    if(displayed_squares[5].x > MaxValue || displayed_squares[5].x < -MaxValue) displayed_squares[5].change_of_x *= -1;

    displayed_squares[6].x += displayed_squares[6].change_of_x;
    if(displayed_squares[6].x > MaxValue || displayed_squares[6].x < -MaxValue) displayed_squares[6].change_of_x *= -1;

    displayed_squares[7].x += displayed_squares[7].change_of_x;
    if(displayed_squares[7].x > MaxValue || displayed_squares[7].x < -MaxValue) displayed_squares[7].change_of_x *= -1;

    displayed_squares[8].x += displayed_squares[8].change_of_x;
    if(displayed_squares[8].x > MaxValue || displayed_squares[8].x < -MaxValue) displayed_squares[8].change_of_x *= -1;

    displayed_squares[0].y += displayed_squares[0].change_of_y;
    if(displayed_squares[0].y > MaxValue || displayed_squares[0].y < -MaxValue) displayed_squares[0].change_of_y *= -1;

    displayed_squares[1].y += displayed_squares[1].change_of_y;
    if(displayed_squares[1].y > MaxValue || displayed_squares[1].y < -MaxValue) displayed_squares[1].change_of_y *= -1;

    displayed_squares[2].y += displayed_squares[2].change_of_y;
    if(displayed_squares[2].y > MaxValue || displayed_squares[2].y < -MaxValue) displayed_squares[2].change_of_y *= -1;

    displayed_squares[3].y += displayed_squares[3].change_of_y;
    if(displayed_squares[3].y > MaxValue || displayed_squares[3].y < -MaxValue) displayed_squares[3].change_of_y *= -1;

    displayed_squares[4].y += displayed_squares[4].change_of_y;
    if(displayed_squares[4].y > MaxValue || displayed_squares[4].y < -MaxValue) displayed_squares[4].change_of_y *= -1;

    displayed_squares[5].y += displayed_squares[5].change_of_y;
    if(displayed_squares[5].y > MaxValue || displayed_squares[5].y < -MaxValue) displayed_squares[5].change_of_y *= -1;

    displayed_squares[6].y += displayed_squares[6].change_of_y;
    if(displayed_squares[6].y > MaxValue || displayed_squares[6].y < -MaxValue) displayed_squares[6].change_of_y *= -1;

    displayed_squares[7].y += displayed_squares[7].change_of_y;
    if(displayed_squares[7].y > MaxValue || displayed_squares[7].y < -MaxValue) displayed_squares[7].change_of_y *= -1;

    displayed_squares[8].y += displayed_squares[8].change_of_y;
    if(displayed_squares[8].y > MaxValue || displayed_squares[8].y < -MaxValue) displayed_squares[8].change_of_y *= -1;
}

