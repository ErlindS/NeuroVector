#include "mirror.h"

#define MAXSIZE 64

static int position_coordinate_0 = 0;
static int position_coordinate_1 = MAXSIZE/9 * 1;
static int position_coordinate_2 = MAXSIZE/9 * 2;

static int position_coordinate_3 = MAXSIZE*0.15;
static int position_coordinate_4 = MAXSIZE*0.5;
static int position_coordinate_5 = MAXSIZE*0.85;

static int position_coordinate_6 = MAXSIZE/9 * 6;
static int position_coordinate_7 = MAXSIZE/9 * 7;
static int position_coordinate_8 = MAXSIZE/9 * 8;

const struct vector_t middle_sideways_mirror[] =
{
{0, -120},
{0, -116},
{0, -112},
{0, -109},
{0, -105},
{0, -101},
{0, -97},
{0, -93},
{0, -90},
{0, -86},
{0, -82},
{0, -78},
{0, -74},
{0, -70},
{0, -67},
{0, -63},
{0, -59},
{0, -55},
{0, -51},
{0, -48},
{0, -44},
{0, -40},
{0, -36},
{0, -32},
{0, -29},
{0, -25},
{0, -21},
{0, -17},
{0, -13},
{0, -10},
{0, -6},
{0, -2},
{0, 2},
{0, 6},
{0, 10},
{0, 13},
{0, 17},
{0, 21},
{0, 25},
{0, 29},
{0, 32},
{0, 36},
{0, 40},
{0, 44},
{0, 48},
{0, 51},
{0, 55},
{0, 59},
{0, 63},
{0, 67},
{0, 70},
{0, 74},
{0, 78},
{0, 82},
{0, 86},
{0, 90},
{0, 93},
{0, 97},
{0, 101},
{0, 105},
{0, 109},
{0, 112},
{0, 116},
{0, 120}
}; 


const struct vector_t left_mirror[] =
{
{-120, -96},
{-116, -96},
{-112, -96},
{-109, -96},
{-105, -96},
{-101, -96},
{-97, -96},
{-93, -96},
{-90, -96},
{-86, -96},
{-82, -96},
{-78, -96},
{-74, -96},
{-70, -96},
{-67, -96},
{-63, -96},
{-59, -96},
{-55, -96},
{-51, -96},
{-48, -96},
{-44, -96},
{-40, -96},
{-36, -96},
{-32, -96},
{-29, -96},
{-25, -96},
{-21, -96},
{-17, -96},
{-13, -96},
{-10, -96},
{-6, -96},
{-2, -96},
{2, -96},
{6, -96},
{10, -96},
{13, -96},
{17, -96},
{21, -96},
{25, -96},
{29, -96},
{32, -96},
{36, -96},
{40, -96},
{44, -96},
{48, -96},
{51, -96},
{55, -96},
{59, -96},
{63, -96},
{67, -96},
{70, -96},
{74, -96},
{78, -96},
{82, -96},
{86, -96},
{90, -96},
{93, -96},
{97, -96},
{101, -96},
{105, -96},
{109, -96},
{112, -96},
{116, -96},
{120, -96}
};

const struct vector_t middle__upways_mirror[] =
{
{-120, 0},
{-116, 0},
{-112, 0},
{-109, 0},
{-105, 0},
{-101, 0},
{-97, 0},
{-93, 0},
{-90, 0},
{-86, 0},
{-82, 0},
{-78, 0},
{-74, 0},
{-70, 0},
{-67, 0},
{-63, 0},
{-59, 0},
{-55, 0},
{-51, 0},
{-48, 0},
{-44, 0},
{-40, 0},
{-36, 0},
{-32, 0},
{-29, 0},
{-25, 0},
{-21, 0},
{-17, 0},
{-13, 0},
{-10, 0},
{-6, 0},
{-2, 0},
{2, 0},
{6, 0},
{10, 0},
{13, 0},
{17, 0},
{21, 0},
{25, 0},
{29, 0},
{32, 0},
{36, 0},
{40, 0},
{44, 0},
{48, 0},
{51, 0},
{55, 0},
{59, 0},
{63, 0},
{67, 0},
{70, 0},
{74, 0},
{78, 0},
{82, 0},
{86, 0},
{90, 0},
{93, 0},
{97, 0},
{101, 0},
{105, 0},
{109, 0},
{112, 0},
{116, 0},
{120, 0}
};

const struct vector_t right_mirror[] =
{
{-120, 94},
{-116, 94},
{-112, 94},
{-109, 94},
{-105, 94},
{-101, 94},
{-97, 94},
{-93, 94},
{-90, 94},
{-86, 94},
{-82, 94},
{-78, 94},
{-74, 94},
{-70, 94},
{-67, 94},
{-63, 94},
{-59, 94},
{-55, 94},
{-51, 94},
{-48, 94},
{-44, 94},
{-40, 94},
{-36, 94},
{-32, 94},
{-29, 94},
{-25, 94},
{-21, 94},
{-17, 94},
{-13, 94},
{-10, 94},
{-6, 94},
{-2, 94},
{2, 94},
{6, 94},
{10, 94},
{13, 94},
{17, 94},
{21, 94},
{25, 94},
{29, 94},
{32, 94},
{36, 94},
{40, 94},
{44, 94},
{48, 94},
{51, 94},
{55, 94},
{59, 94},
{63, 94},
{67, 94},
{70, 94},
{74, 94},
{78, 94},
{82, 94},
{86, 94},
{90, 94},
{93, 94},
{97, 94},
{101, 94},
{105, 94},
{109, 94},
{112, 94},
{116, 94},
{120, 94}
};

void add_movement(){
    displayed_squares[3].y = middle_sideways_mirror[position_coordinate_3].y;
    displayed_squares[3].x = middle_sideways_mirror[position_coordinate_3].x;
    displayed_squares[4].y = middle_sideways_mirror[position_coordinate_4].y;
    displayed_squares[4].x = middle_sideways_mirror[position_coordinate_4].x;
    displayed_squares[5].y = middle_sideways_mirror[position_coordinate_5].y;
    displayed_squares[5].x = middle_sideways_mirror[position_coordinate_5].x;

    displayed_squares[0].y = left_mirror[position_coordinate_0].y;
    displayed_squares[0].x = left_mirror[position_coordinate_0].x;
    displayed_squares[6].y = left_mirror[position_coordinate_6].y;
    displayed_squares[6].x = left_mirror[position_coordinate_6].x;

    displayed_squares[1].y = middle__upways_mirror[position_coordinate_1].y;
    displayed_squares[1].x = middle__upways_mirror[position_coordinate_1].x;
    displayed_squares[7].y = middle__upways_mirror[position_coordinate_7].y;
    displayed_squares[7].x = middle__upways_mirror[position_coordinate_7].x;

    displayed_squares[2].y = right_mirror[position_coordinate_2].y;
    displayed_squares[2].x = right_mirror[position_coordinate_2].x;
    displayed_squares[8].y = right_mirror[position_coordinate_8].y;
    displayed_squares[8].x = right_mirror[position_coordinate_8].x;

    ++position_coordinate_0;
    ++position_coordinate_1;
    ++position_coordinate_2;
    ++position_coordinate_3;
    ++position_coordinate_4;
    ++position_coordinate_6;
    ++position_coordinate_5;
    ++position_coordinate_7;
    ++position_coordinate_8;

    if(position_coordinate_0 > MAXSIZE) position_coordinate_0 = 0;
    if(position_coordinate_1 > MAXSIZE) position_coordinate_1 = 0;
    if(position_coordinate_2 > MAXSIZE) position_coordinate_2 = 0;
    if(position_coordinate_3 > MAXSIZE) position_coordinate_3 = 0;
    if(position_coordinate_4 > MAXSIZE) position_coordinate_4 = 0;
    if(position_coordinate_5 > MAXSIZE) position_coordinate_5 = 0;
    if(position_coordinate_6 > MAXSIZE) position_coordinate_6 = 0;
    if(position_coordinate_7 > MAXSIZE) position_coordinate_7 = 0;
    if(position_coordinate_8 > MAXSIZE) position_coordinate_8 = 0;
}
