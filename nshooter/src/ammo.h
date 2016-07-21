// This file contains the declaration for the ammo component
#ifndef AMMO_H_INCLUDED
#define AMMO_H_INCLUDED

#include "window.h"

#define AMMO_SCREEN_ROWS 4
#define AMMO_SCREEN_COLS 30

WINDOW *ammo_screen;

#define MAX_AMMO AMMO_SCREEN_COLS/2

int current_ammo;
int ammo_screen_starting_y, ammo_screen_starting_x;

void init_ammo();
void render_ammo();
int try_shoot();

#endif
