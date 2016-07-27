// This file contains the definition for the gameplay actions component
#include "gameplay.h"

#include "ammo.h"
#include "main_screen.h"
#include "window.h"

int move_within_borders(int KEY, int y, int x )
{
  switch(KEY)
    {
    case KEY_K:
      if (x > (TOTAL_SCREEN_ROWS/2 - MAIN_SCREEN_ROWS/2))
        return UP;
      break;
    case KEY_L:
      if (y < (TOTAL_SCREEN_COLS/2 + MAIN_SCREEN_COLS/2))
        return RIGHT;
      break;
    case KEY_J:
      if (x < (TOTAL_SCREEN_ROWS/2 + MAIN_SCREEN_ROWS/2)-1)
        return DOWN;
      break;
    case KEY_H:
      if (y > (TOTAL_SCREEN_COLS/2 - MAIN_SCREEN_COLS/2))
        return LEFT;
      break;
   default:
      return NONE;
    }
  return NONE;
}
