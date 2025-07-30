// ---------------------------------------------------------------------------
// Random Number Generator
//
// Filename: square.h
// Description: Defines the functions and classes needed to create and save random input.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#include "numbergenerator.h"

void create_random_sequence(unsigned int n) {
    for(int i = 0; i < 20; i++){
        n ^= n >> 4;
        n += n << 3;
        n ^= n >> 6;
        n += n << 2;
        n ^= n >> 5;
        unsigned int val = a_random[i] + n;
        while(val >= 9) {
            val -= 9;
        }
        a_random[i] = val;
    }
}

unsigned int a_random[20] = {3, 9, 7, 5, 5, 8, 4, 5, 9, 8, 1, 5, 9, 2, 9, 6, 3, 1, 6, 3};