// This file contains the definition for the gameplay actions component
#include "gameplay.h"

#include "constants.h"
#include "ammo.h"
#include "main_screen.h"
#include "window.h"

int move_within_borders(int KEY)
{
  switch(KEY)
    {
    case KEY_K:
      if (check_border(BORDER_TOP, cursor_vec2()))
        return DIR_UP;
      break;
    case KEY_L:
      if (check_border(BORDER_RIGHT, cursor_vec2()))
        return DIR_RIGHT;
      break;
    case KEY_J:
      if (check_border(BORDER_BOTTOM, cursor_vec2()))
        return DIR_DOWN;
      break;
    case KEY_H:
      if (check_border(BORDER_LEFT, cursor_vec2()))
        return DIR_LEFT;
      break;
   default:
     return DIR_NONE;
    }
  return DIR_NONE;
}

// TODO: Make it so cursor is returned to its original position
int shoot(vec2 pos)
{
  char status = (char)mvgetch(pos.y, pos.x);
  if (current_ammo==0||status==STATUS_SHOOTED){
    return SHOOT_FAIL;
  }
  substract_ammo();
  addch((char)STATUS_SHOOTED);
  return SHOOT_OK;
}
