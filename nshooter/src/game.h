#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

#include <ncurses.h>

#define MAX_Y 20
#define MAX_X 45

WINDOW *main_window;

int ROWS, COLS;

int current_y, current_x;

char* S_WELCOME;
char* S_GAME_START;

int game_start();
int game_loop();
int read_input();
void init();
void load_constants();

#endif
