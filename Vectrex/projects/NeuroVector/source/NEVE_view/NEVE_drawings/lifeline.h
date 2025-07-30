// ---------------------------------------------------------------------------
// Lifeline
//
// Filename: lifeline.h
// Description: classes needed for the lifeline.
// Author: Erlind Sejdiu
// Date: 2025-07-26
// ---------------------------------------------------------------------------

#pragma once

typedef struct {
    int progress;
    int draw_tick;
    int remaining_cycles;
    const int rest[69];
} LifelineStruct;

extern LifelineStruct lifeline;