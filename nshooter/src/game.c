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
  getyx(main_screen, current_y, current_x);
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
  load_constants();
  initscr();
  cbreak();
  noecho();
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
  switch(k)
  {
    case KEY_W:
      if (current_y < MAIN_SCREEN_ROWS){
        move(++current_y, current_x);
        return 0;
      }
    break;
    case KEY_D:
      if (current_x > 0){
        move(current_y, ++current_x);
        return 0;
      }
    break;
    case KEY_S:
      if (current_x < MAIN_SCREEN_COLS){
        move(--current_y, current_x);
        return 0;
      }
      break;
      case KEY_a:
        if (current_y > 0){
          move(current_y, current_x++);
          return 0;
        }
      break;
      default:
          break;
  }
  return 1;
}
