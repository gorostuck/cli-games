// This file contains the declarations for the main screen
#include "main_screen.h"

#include "constants.h"

void init_main_screen(int ROWS, int COLS)
{
    main_screen = window_in_middle(MAIN_SCREEN_ROWS, MAIN_SCREEN_COLS, ROWS, COLS);
}

int check_border(int border, vec2 pos)
{
  switch (border){
  case BORDER_TOP:
    if (pos.x > TOTAL_SCREEN_ROWS/2 - MAIN_SCREEN_ROWS/2)
      return TRUE;
    break;
  case BORDER_LEFT:
    if (pos.y > (TOTAL_SCREEN_COLS/2 - MAIN_SCREEN_COLS/2))
      return TRUE;
    break;
  case BORDER_RIGHT:
    if (pos.y < (TOTAL_SCREEN_COLS/2 + MAIN_SCREEN_COLS/2))
      return TRUE;
    break;
  case BORDER_BOTTOM:
    if (pos.x < (TOTAL_SCREEN_COLS/2 - MAIN_SCREEN_COLS/2))
      return TRUE;
    break;
  default:
    return FALSE;
  }
  return FALSE;
}
