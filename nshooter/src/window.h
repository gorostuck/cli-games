// This file contains the declaration for the window component of the game
#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include <ncurses.h>

int TOTAL_SCREEN_ROWS, TOTAL_SCREEN_COLS;

WINDOW *create_newwin(int height, int width, int starty, int startx);
WINDOW *window_in_middle(int height, int width, int max_y, int max_x);

void destroy_win(WINDOW* local_window);
void print_in_middle(int max_y, int max_x, const char* string);

#endif
