// This file contains the declaration for the ammo component
#ifndef AMMO_H_INCLUDED
#define AMMO_H_INCLUDED

#include "window.h"

WINDOW *ammo_screen;

int current_ammo;
int ammo_screen_starting_y, ammo_screen_starting_x;

void init_ammo();
void render_ammo();
int try_shoot();

#endif // AMMO_H_INCLUDED
