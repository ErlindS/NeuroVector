// ---------------------------------------------------------------------------
// Random Number Generator
// ---------------------------------------------------------------------------
#include "numbergenerator.h"

// TODO: Improve this
void create_random_sequence(unsigned int n) {
    for(int i = 0; i < 20; i++){
        n ^= n >> 4;
        n += n << 3;
        n ^= n >> 6;
        n += n << 2;
        n ^= n >> 5;
        a_random[i] = (a_random[i] + n) % 9;
    }
}

unsigned int a_random[20] = {3, 9, 7, 5, 5, 8, 4, 5, 9, 8, 1, 5, 9, 2, 9, 6, 3, 1, 6, 3};