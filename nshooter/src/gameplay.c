// This file contains the definition for the gameplay actions component
#include "gameplay.h"

#include "constants.h"
#include "ammo.h"
#include "main_screen.h"
#include "window.h"

int move_within_borders(int KEY, int y, int x )
{
  switch(KEY)
    {
    case KEY_K:
      if (x > (TOTAL_SCREEN_ROWS/2 - MAIN_SCREEN_ROWS/2))
        return DIR_UP;
      break;
    case KEY_L:
      if (y < (TOTAL_SCREEN_COLS/2 + MAIN_SCREEN_COLS/2))
        return DIR_RIGHT;
      break;
    case KEY_J:
      if (x < (TOTAL_SCREEN_ROWS/2 + MAIN_SCREEN_ROWS/2)-1)
        return DIR_DOWN;
      break;
    case KEY_H:
      if (y > (TOTAL_SCREEN_COLS/2 - MAIN_SCREEN_COLS/2))
        return DIR_LEFT;
      break;
   default:
     return DIR_NONE;
    }
  return DIR_NONE;
}

// TODO: Make it so cursor is returned to its original position
int shoot(int y, int x)
{
  char status = (char)mvgetch(y, x);
  if (current_ammo==0||status==STATUS_SHOOTED){
    return SHOOT_FAIL;
  }
  substract_ammo();
  addch((char)STATUS_SHOOTED);
  return SHOOT_OK;
}
