#include "square.h"

void add_square_x(int id){
    Displayed_Squares[id].x += 1;
    if(Displayed_Squares[id].x > 25){
        Displayed_Squares[id].addrandom_x = &sub_square_x;
    }
}

void add_square_y(int id){
    Displayed_Squares[id].y += 1;
    if(Displayed_Squares[id].y > 25){
        Displayed_Squares[id].addrandom_y = &sub_square_y;
    }
}

void sub_square_x(int id){
    Displayed_Squares[id].x -= 1;
    if(Displayed_Squares[id].x < -25){
        Displayed_Squares[id].addrandom_x = &add_square_x;
    }
}

void sub_square_y(int id){
    Displayed_Squares[id].y -= 1;
    if(Displayed_Squares[id].y < -25){
        Displayed_Squares[id].addrandom_y = &add_square_y;
    }
}


void reset_Displayed_Squares_coordinates(){
    Displayed_Squares[0].x = 16; Displayed_Squares[0].y = -16;
    Displayed_Squares[1].x = 16; Displayed_Squares[1].y = 0;
    Displayed_Squares[2].x = 16; Displayed_Squares[2].y = 16;
    Displayed_Squares[3].x = 0; Displayed_Squares[3].y = -16;
    Displayed_Squares[4].x = 0; Displayed_Squares[4].y = 0;
    Displayed_Squares[5].x = 0; Displayed_Squares[5].y = 16;
    Displayed_Squares[6].x = -16; Displayed_Squares[6].y = -16;
    Displayed_Squares[7].x = -16; Displayed_Squares[7].y = 0;
    Displayed_Squares[8].x = -16; Displayed_Squares[8].y = 16;

    Displayed_Squares[0].scalingfactor = 16;
    Displayed_Squares[1].scalingfactor = 16;
    Displayed_Squares[2].scalingfactor = 16;
    Displayed_Squares[3].scalingfactor = 16;
    Displayed_Squares[4].scalingfactor = 16;
    Displayed_Squares[5].scalingfactor = 16;
    Displayed_Squares[6].scalingfactor = 16;
    Displayed_Squares[7].scalingfactor = 16;

}