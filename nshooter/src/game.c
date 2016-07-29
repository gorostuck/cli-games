// This file contains the definition for the main game's process
#include "game.h"

#include <string.h>

#include "defines.h"
#include "vec2.h"
#include "window.h"
#include "main_screen.h"
#include "ammo.h"
#include "gameplay.h"

int game_start()
{
  init();
  move(0,0);
  getch();
  init_main_screen(TOTAL_SCREEN_ROWS, TOTAL_SCREEN_COLS);
  init_ammo();
  move(Y_CENTER, X_CENTER);
  while (game_loop());
  destroy_win(main_screen);
  endwin();
  return 0;
}

int game_loop()
{
  getyx(stdscr, current_y, current_x);
  if (read_input(getch())==0) return 0;
  render_ammo();
  refresh();
  if(current_ammo==0) return 0;
  return 1;
}


void init()
{
  keypad(stdscr, TRUE);
  initscr();
  cbreak();
  noecho();
  getmaxyx(stdscr, TOTAL_SCREEN_ROWS, TOTAL_SCREEN_COLS);
  box(stdscr, 0,0);

#ifdef DEBUG_MODE
  print_debug_stuff();
#endif /* DEBUG_MODE */
}

int read_input(int k)
{
  if (k==KEY_SHOOT) {
    if (shoot(cursor_vec2())==SHOOT_FAIL)
      return 1;
  }
  else move_cursor(k);
  return 1;
}

#ifdef DEBUG_MODE
void print_debug_stuff()
{
  move(1,1);
  printw("TOTAL_SCREEN_ROWS: %d", TOTAL_SCREEN_ROWS);
  move(2,1);
  printw("TOTAL_SCREEN_COLS: %d", TOTAL_SCREEN_COLS);
  move(3,1);
  printw("MAIN_SCREEN_ROWS: %d", MAIN_SCREEN_ROWS);
  move(4,1);
  printw("MAIN_SCREEN_COLS: %d", MAIN_SCREEN_COLS);
  move(5,1);
  printw("AMMO_SCREEN_ROWS: %d", AMMO_SCREEN_ROWS);
  move(6,1);
  printw("AMMO_SCREEN_COLS: %d", AMMO_SCREEN_COLS);
}
#endif /* DEBUG_MODE */
