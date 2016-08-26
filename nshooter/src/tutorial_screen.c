// This file contains the definitions for stuff related to the tutorial screen
#include "tutorial_screen.h"

#include <string.h>

#include "defines.h"
#include "window.h"
#include "vec2.h"


void init_tutorial_screen()
{
  tutorial_screen_starting_y = TOTAL_SCREEN_ROWS/2 - MAIN_SCREEN_ROWS/2 + TUTORIAL_SCREEN_ROWS_DIFF/2;
  tutorial_screen_starting_x = TOTAL_SCREEN_COLS/2 + MAIN_SCREEN_COLS/2 + 2;

  tutorial_screen = create_newwin(TUTORIAL_SCREEN_ROWS, TUTORIAL_SCREEN_COLS, tutorial_screen_starting_y, tutorial_screen_starting_x);
}

void print_in_tutorial(const char* str)
{
  clean_tutorial();
  vec2 old_pos = cursor_vec2();
  int index = 0;
  move(tutorial_screen_starting_y, tutorial_screen_starting_x);
  vec2 cursor_pos = cursor_vec2();
  for(int y=1; y < TUTORIAL_SCREEN_ROWS-1; ++y){
    for(int x=1; x < TUTORIAL_SCREEN_COLS-1; ++index,++x){
      move(cursor_pos.y+y, cursor_pos.x+x);
      if (index < strlen(str)){
        if (str[index]=='/'){
          x = TUTORIAL_SCREEN_COLS; continue;
        }
        if (str[index]==' '&& x==1){
          --x; continue;
        }
        addch(str[index]);
      }
      else addch(CHAR_NULL);
    }
  }
  vmove(old_pos);
}

void clean_tutorial()
{
  vec2 old_pos = cursor_vec2();
  move(tutorial_screen_starting_y, tutorial_screen_starting_x);
  vec2 cursor_pos = cursor_vec2();
  for(int y=1; y < TUTORIAL_SCREEN_ROWS-1; ++y){
    for(int x=1; x < TUTORIAL_SCREEN_COLS-1; ++x){
      move(cursor_pos.y+y, cursor_pos.x+x);
      addch(CHAR_NULL);}
  }
  vmove(old_pos);
}
