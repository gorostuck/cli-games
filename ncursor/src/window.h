#pragma once
#include <ncurses.h>
/* This file contains the declaration of all window managing related stuff */

/* Creates a window, nice */
WINDOW *create_newwin(int height, int width, int starty, int startx);

/* Destroys a window, nice */
void destroy_win(WINDOW* local_window);
