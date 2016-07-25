// This file contains the definition for the main game's process
#include "game.h"

#include <string.h>
#include "window.h"
#include "main_screen.h"
#include "ammo.h"

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
  return 1;
}

int read_input(int k)
{
  if (k==KEY_SHOOT)
  {
    if (try_shoot()==0)
      return 0;
    return 1;
  }
  move_within_borders(k);
  return 1;
}

void init()
{
  keypad(stdscr, TRUE);
  load_constants();
  initscr();
  cbreak();
  noecho();

  #ifdef DEBUG_MODE
  print_debug_stuff();
#endif // DEBUG_MODE

  getmaxyx(stdscr, TOTAL_SCREEN_ROWS, TOTAL_SCREEN_COLS);
  box(stdscr, 0,0);
}

void load_constants()
{
  S_WELCOME = "Hi there! Press any key to start playing!";
  S_GAME_START= "*****GAME START*****";
}


int move_within_borders(int k)
{

#ifdef DEBUG_MODE
  move(0,0);
  printw("%d, %d", current_y, current_x);
  move(current_y, current_x);
#endif // DEBUG_MODE

  switch(k)
  {
  case KEY_W:
    if (current_y > (TOTAL_SCREEN_ROWS + MAIN_SCREEN_ROWS))
      {
        move(--current_y, current_x);
        return 0;
      }
    break;
  case KEY_D:
    if (current_x < (TOTAL_SCREEN_COLS - MAIN_SCREEN_COLS))
      {
        move(current_y, ++current_x);
        return 0;
      }
    break;
  case KEY_S:
    if (current_y < (TOTAL_SCREEN_ROWS - MAIN_SCREEN_ROWS))
      {
        move(++current_y, current_x);
        return 0;
      }
     break;
  case KEY_A:
    if (current_x > (TOTAL_SCREEN_COLS - MAIN_SCREEN_COLS/2))
        {
          move(current_y, --current_x);
          return 0;
        }
      break;
   default:
          break;
  }
  return 1;
}


#ifdef DEBUG_MODE
void print_debug_stuff()
{
  move(1,1);
  printw("TOTAL_SCREEN_ROWS: %d", TOTAL_SCREEN_ROWS);
  move(2,1);
  printw("TOTAL_SCREEN_ROWS: %d", TOTAL_SCREEN_ROWS);
  move(3,1);
  printw("MAIN_SCREEN_ROWS: %d", MAIN_SCREEN_ROWS);
  move(4,1);
  printw("MAIN_SCREEN_COLS: %d", MAIN_SCREEN_COLS);
  move(5,1);
  printw("AMMO_SCREEN_COLS: %d", AMMO_SCREEN_COLS);
  move(6,1);
  printw("AMMO_SCREEN_COLS: %d", AMMO_SCREEN_COLS);


}
#endif // DEBUG_MODE
