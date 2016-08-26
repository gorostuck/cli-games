// This file contains the definition for the window component of the game
#include "window.h"
#include <string.h>

WINDOW *create_newwin(int height, int width, int starty, int startx)
{
  WINDOW *local_win;

  local_win = newwin(height, width, starty, startx);
  box(local_win, 0, 0);

  wrefresh(local_win);

  return local_win;
}

void destroy_win(WINDOW *local_win)
{
  wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
  wrefresh(local_win);
  delwin(local_win);
}


void print_in_middle(int max_y, int max_x, const char* string)
{
  mvprintw(max_y/2, (max_x-strlen(string))/2, "%s", string);
  refresh();
}
