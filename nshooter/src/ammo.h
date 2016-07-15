#ifndef AMMO_H_INCLUDED
#define AMMO_H_INCLUDED

#include "window.h"

#define AMMO_SCREEN_ROWS 4
#define AMMO_SCREEN_COLS 10

WINDOW *ammo_screen;

#define MAX_AMMO 10

unsigned int current_ammo;

void init_ammo();

#endif
