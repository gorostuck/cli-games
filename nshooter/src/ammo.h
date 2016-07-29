// This file contains the declaration for the ammo component
#ifndef AMMO_H_INCLUDED
#define AMMO_H_INCLUDED

#include "ncurses.h"

WINDOW *ammo_screen;

int current_ammo;
int ammo_screen_starting_y, ammo_screen_starting_x;

void init_ammo();
void render_ammo();
void substract_ammo();
void reload_ammo();

#endif /* AMMO_H_INCLUDED */
