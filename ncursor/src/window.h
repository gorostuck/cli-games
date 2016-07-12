// This file contains the declaration of the window
#include <ncurses.h>

// Creates a window
WINDOW *create_win(int height, int width, int starty, int startx);
// Destroys the window
void destroy_win(WINDOW *local_win);
