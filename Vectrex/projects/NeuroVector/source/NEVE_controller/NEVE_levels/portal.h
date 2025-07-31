// ***************************************************************************
// Portal
//
// Filename: portal.h
// Description: Manages the functions needed for the portal mode.
// Author: Erlind Sejdiu
// Date: 2025-07-31
// ***************************************************************************

#pragma once
#include "../../NEVE_view/drawables.h"
#include "../globalvariables.h"

void portal_movement();

extern const struct vector_t middle_sideways_portal[];
extern const struct vector_t left_portal[];
extern const struct vector_t middle__upways_portal[];
extern const struct vector_t right_portal[];