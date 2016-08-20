// This file contains the definitions for stuff related to the tutorial screen
#include "tutorial_screen.h"

#include "defines.h"
#include "window.h"
#include "vec2.h"

void init_tutorial_screen()
{
  int tutorial_screen_starting_y = TOTAL_SCREEN_ROWS/2 - MAIN_SCREEN_ROWS/2 + TUTORIAL_SCREEN_ROWS_DIFF/2;
  int tutorial_screen_starting_x = TOTAL_SCREEN_COLS/2 + MAIN_SCREEN_COLS/2 + 2;

  tutorial_screen = create_newwin(TUTORIAL_SCREEN_ROWS, TUTORIAL_SCREEN_COLS, tutorial_screen_starting_y, tutorial_screen_starting_x);
}

void print_in_tutorial()
{
  vec2 old_cursor_pos = cursor_vec2();
  move(old_cursor_pos.y+TUTORIAL_SCREEN_COLS+1, old_cursor_pos.x+TUTORIAL_SCREEN_ROWS+1);
  vec2 cursor_pos = cursor_vec2();
  for(int y=1; y < TUTORIAL_SCREEN_COLS; ++y){
    for(int x=1; x < TUTORIAL_SCREEN_ROWS; ++x){
      move(cursor_pos.y+y, cursor_pos.x+x);
      addch('o');
    }
  }
}
