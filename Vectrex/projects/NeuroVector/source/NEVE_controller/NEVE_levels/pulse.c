// ---------------------------------------------------------------------------
// Hard
//
// Filename: hard.c
// Description: Manages the functions needed for the hard mode.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#include "pulse.h"

void change_cross_size(){

   //0 decrement
   //1 increment
    if(displayed_squares[0].scaling_factor_toggle == 1){
        ++displayed_squares[0].scaling_factor;
        if(displayed_squares[0].scaling_factor > 32) displayed_squares[0].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[0].scaling_factor;
        if(displayed_squares[0].scaling_factor < 9) displayed_squares[0].scaling_factor_toggle = 1;
    }
    
    if(displayed_squares[1].scaling_factor_toggle == 1){
        ++displayed_squares[1].scaling_factor;
        if(displayed_squares[1].scaling_factor > 32) displayed_squares[1].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[1].scaling_factor;
        if(displayed_squares[1].scaling_factor < 9) displayed_squares[1].scaling_factor_toggle = 1;
    }

    if(displayed_squares[2].scaling_factor_toggle == 1){
        ++displayed_squares[2].scaling_factor;
        if(displayed_squares[2].scaling_factor > 32) displayed_squares[2].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[2].scaling_factor;
        if(displayed_squares[2].scaling_factor < 9) displayed_squares[2].scaling_factor_toggle = 1;
    }

    if(displayed_squares[3].scaling_factor_toggle == 1){
        ++displayed_squares[3].scaling_factor;
        if(displayed_squares[3].scaling_factor > 32) displayed_squares[3].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[3].scaling_factor;
        if(displayed_squares[3].scaling_factor < 9) displayed_squares[3].scaling_factor_toggle = 1;
    }

    if(displayed_squares[4].scaling_factor_toggle == 1){
        ++displayed_squares[4].scaling_factor;
        if(displayed_squares[4].scaling_factor > 32) displayed_squares[4].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[4].scaling_factor;
        if(displayed_squares[4].scaling_factor < 9) displayed_squares[4].scaling_factor_toggle = 1;
    }

    if(displayed_squares[5].scaling_factor_toggle == 1){
        ++displayed_squares[5].scaling_factor;
        if(displayed_squares[5].scaling_factor > 32) displayed_squares[5].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[5].scaling_factor;
        if(displayed_squares[5].scaling_factor < 9) displayed_squares[5].scaling_factor_toggle = 1;
    }

    if(displayed_squares[6].scaling_factor_toggle == 1){
        ++displayed_squares[6].scaling_factor;
        if(displayed_squares[6].scaling_factor > 32) displayed_squares[6].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[6].scaling_factor;
        if(displayed_squares[6].scaling_factor < 9) displayed_squares[6].scaling_factor_toggle = 1;
    }

    if(displayed_squares[7].scaling_factor_toggle == 1){
        ++displayed_squares[7].scaling_factor;
        if(displayed_squares[7].scaling_factor > 32) displayed_squares[7].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[7].scaling_factor;
        if(displayed_squares[7].scaling_factor < 9) displayed_squares[7].scaling_factor_toggle = 1;
    }

    if(displayed_squares[8].scaling_factor_toggle == 1){
        ++displayed_squares[8].scaling_factor;
        if(displayed_squares[8].scaling_factor > 32) displayed_squares[8].scaling_factor_toggle = 0;
    } else {
        --displayed_squares[8].scaling_factor;
        if(displayed_squares[8].scaling_factor < 9) displayed_squares[8].scaling_factor_toggle = 1;
    }
}
