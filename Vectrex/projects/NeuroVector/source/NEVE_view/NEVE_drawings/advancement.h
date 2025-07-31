// ***************************************************************************
// Advancement
//
// Filename: advancement.h
// Description: classes needed for the advancement.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ***************************************************************************


//one of my old advancement bars took too many cycles. With this small approach it
//is possible to stay below the 30 000 given cycles. 
#pragma once

typedef struct {
    int progress;
    const int rest[34];
} Advancement;

extern Advancement advancement_bar_total;
extern Advancement advancement_bar_current;