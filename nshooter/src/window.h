#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED

#include <ncurses.h>

WINDOW *create_newwin(int height, int width, int starty, int startx);
void destroy_win(WINDOW* local_window);
void print_in_middle(int max_y, int max_x, const char* string);

#endif