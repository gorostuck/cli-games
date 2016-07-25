// This file contains the declaration for the main game's process

#define DEBUG_MODE

#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#define KEY_SHOOT (int)' '

#define KEY_W  (int)'w'
#define KEY_S  (int)'s'
#define KEY_A  (int)'a'
#define KEY_D  (int)'d'

int current_y, current_x;

char* S_WELCOME;
char* S_GAME_START;

int game_start();
int game_loop();
int read_input();
int move_within_borders();
void init();
void load_constants();

#ifdef DEBUG_MODE
void print_debug_stuff();
#endif // DEBUG_MODE

#endif // GAME_H_INCLUDED
