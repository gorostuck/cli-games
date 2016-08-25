// This file contains the definition for vec2 related functions
#include "vec2.h"

#include "ncurses.h"

vec2 cursor_vec2()
{
  vec2 cursor_vec2;
  getyx(stdscr, cursor_vec2.y, cursor_vec2.x);
  return cursor_vec2;
}

// Shameless
void vmove(vec2 new_pos)
{
  move(new_pos.y, new_pos.x);
}
