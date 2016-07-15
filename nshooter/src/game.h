#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include "window.h"

int current_y, current_x;

char* S_WELCOME;
char* S_GAME_START;

int game_start();
int game_loop();
int read_input();
void init();
void load_constants();

#endif
