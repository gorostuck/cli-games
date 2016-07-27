// This file contains the definition for the ammo component
#include "ammo.h"

#include "constants.h"
#include "main_screen.h"

void init_ammo()
{
  current_ammo = MAX_AMMO;

  ammo_screen_starting_y = TOTAL_SCREEN_ROWS/2 + MAIN_SCREEN_ROWS/2;
  ammo_screen_starting_x = TOTAL_SCREEN_COLS/2 - AMMO_SCREEN_COLS/2;

  ammo_screen = create_newwin (AMMO_SCREEN_ROWS, AMMO_SCREEN_COLS,   ammo_screen_starting_y, ammo_screen_starting_x);

  render_ammo();
}

void render_ammo()
{
  int current_y, current_x;
  getyx(stdscr, current_y, current_x);
  int cursor_y = ammo_screen_starting_y, cursor_x = ammo_screen_starting_x;
  for (int i=0; i < MAX_AMMO; ++i, cursor_x +=2)
  {
    for (int e=0; e < AMMO_SCREEN_ROWS; ++e, ++cursor_y)
      {
        move(cursor_y, cursor_x);
        if (i >= current_ammo)
          printw("  ");
        else {
          if (e==0) printw("^ ");
          else printw("# ");
        }
      }
    cursor_y=ammo_screen_starting_y;
  }
  move(current_y, current_x);
}

int try_shoot()
{
  if (current_ammo > 0)
  {
    current_ammo -=1;
    return 1;
  } else return 0;
}
