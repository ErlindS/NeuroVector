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