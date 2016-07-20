// This file contains the declaration for the main game's process
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

int current_y, current_x;

char* S_WELCOME;
char* S_GAME_START;

int game_start();
int game_loop();
int read_input();
void init();
void load_constants();

#endif
