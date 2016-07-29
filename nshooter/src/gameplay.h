// This file contains the declaration for the gameplay actions component
#ifndef GAMEPLAY_H_INCLUDED
#define GAMEPLAY_H_INCLUDED

#include "vec2.h"

int move_within_borders(int KEY);
int shoot(vec2 pos);

void move_cursor(int direction);


#endif // GAMEPLAY_H_INCLUDED
