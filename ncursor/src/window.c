// This file contains the definitions for the Window
#include "window.h"
WINDOW *create_win(int height, int width, int starty, int startx) 
{   WINDOW *local_win;
    local_win = newwin(height, width, starty, startx);
    wborder(local_win, '|', '|', '-', '-', '+', '+', '+', '+');
    printw("hie");
    wrefresh(local_win); // Needed to show the new window
    return local_win;
}
void destroy_win(WINDOW *local_win) 
{
    wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '); // If you don't change this, it will suck
    wrefresh(local_win);
    delwin(local_win);
}
