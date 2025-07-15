#include "hard.h"

void Set_traps(){

   //0 decrement
   //1 increment
    for(int i = 0; i < 9; i++){
        if(Displayed_Squares[i].scalingfactor_toggle == 1){
            ++Displayed_Squares[i].scalingfactor;
            if(Displayed_Squares[i].scalingfactor > 32) Displayed_Squares[i].scalingfactor_toggle = 0;
        } else {
            --Displayed_Squares[i].scalingfactor;
            if(Displayed_Squares[i].scalingfactor < 9) Displayed_Squares[i].scalingfactor_toggle = 1;
        }
    }
}
