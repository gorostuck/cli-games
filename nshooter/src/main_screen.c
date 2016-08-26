// This file contains the declarations for the main screen
#include "main_screen.h"

#include "vec2.h"

void init_main_screen()
{
    main_screen_starting_y = (TOTAL_SCREEN_ROWS-MAIN_SCREEN_ROWS)/2;
    main_screen_starting_x = (TOTAL_SCREEN_COLS-MAIN_SCREEN_COLS)/2;

    main_screen = create_newwin(MAIN_SCREEN_ROWS, MAIN_SCREEN_COLS, main_screen_starting_y, main_screen_starting_x);
}

void refresh_field()
{
  vec2 old_pos = cursor_vec2();
  for (int y=1; y < MAIN_SCREEN_ROWS; ++y){
    for (int x=1; x < MAIN_SCREEN_COLS; ++x){
      field[y-1][x-1] = mvinch(main_screen_starting_y+y, main_screen_starting_x+x);
      }
    }
  /*  SHIT GOES CRAZY
  move(0,0);
  int shots=0;
  for (int y=0; y < MAIN_SCREEN_ROWS; ++y){
    for (int x=0; x < MAIN_SCREEN_COLS; ++x){
      if (field[y][x]=='x') ++shots;
    }
  }
  printw("%n", shots);
  getch();
  /*
  vmove(old_pos);
}

int check_border(int border, vec2 pos)
{ /* This way you are not allowed to go within borders */
  switch (border){
  case BORDER_TOP:
    if (pos.y > (TOTAL_SCREEN_ROWS/2 - MAIN_SCREEN_ROWS/2)+1)
      return TRUE;
    break;
  case BORDER_LEFT:
    if (pos.x > (TOTAL_SCREEN_COLS/2 - MAIN_SCREEN_COLS/2)+1)
      return TRUE;
    break;
  case BORDER_RIGHT:
    if (pos.x < (TOTAL_SCREEN_COLS/2 + MAIN_SCREEN_COLS/2)-1)
      return TRUE;
    break;
  case BORDER_BOTTOM:
    if (pos.y < (TOTAL_SCREEN_ROWS/2 + MAIN_SCREEN_ROWS/2)-2)
      return TRUE;
    break;
  default:
    return FALSE;
  }
  return FALSE;
}

int check_all_borders(vec2 pos)
{
  if (check_border(BORDER_TOP, pos) && check_border(BORDER_LEFT, pos) &&
      check_border(BORDER_RIGHT, pos) && check_border(BORDER_BOTTOM, pos))
    return TRUE;
  else return FALSE;
}
