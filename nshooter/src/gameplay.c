// This file contains the definition for the gameplay actions component
#include "gameplay.h"

#include "defines.h"
#include "ammo.h"
#include "main_screen.h"
#include "window.h"

int move_within_borders(int KEY)
{
  switch(KEY)
    {
    case KEY_MOVE_UP:
      if (check_border(BORDER_TOP, cursor_vec2()))
        return DIR_UP;
      break;
    case KEY_MOVE_RIGHT:
      if (check_border(BORDER_RIGHT, cursor_vec2()))
        return DIR_RIGHT;
      break;
    case KEY_MOVE_DOWN:
      if (check_border(BORDER_BOTTOM, cursor_vec2()))
        return DIR_DOWN;
      break;
    case KEY_MOVE_LEFT:
      if (check_border(BORDER_LEFT, cursor_vec2()))
        return DIR_LEFT;
      break;
   default:
     return DIR_NONE;
    }
  return DIR_NONE;
}

void move_cursor(int direction)
{

#ifdef DEBUG_MODE
  move(0,0);
  printw("(%d, %d)", current_y, current_x);
  move(current_y, current_x);
#endif /* DEBUG_MODE */

  vec2 current_pos = cursor_vec2();
  switch(move_within_borders(direction))
    {
    case DIR_UP:
      move(--current_pos.y, current_pos.x);
      return;
    case DIR_RIGHT:
      move(current_pos.y, ++current_pos.x);
      return;
    case DIR_DOWN:
      move(++current_pos.y, current_pos.x);
      return;
    case DIR_LEFT:
      move(current_pos.y, --current_pos.x);
      return;
    case DIR_NONE:
      return;
    }
}

// TODO: Make it so cursor is returned to its original position
int shoot(vec2 pos)
{
  char status = (char)mvinch(pos.y, pos.x);
  if (current_ammo==0||status==STATUS_SHOOTED){
    return SHOOT_FAIL;
  }
  substract_ammo();
  addch((char)STATUS_SHOOTED);
  move(pos.y, pos.x);
  return SHOOT_OK;
}
