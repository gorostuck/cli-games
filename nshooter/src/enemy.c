// This file contains the definition for everything related to enemies
#include "enemy.h"

#include <stdlib.h>

#include "defines.h"
#include "main_screen.h"
#include "vec2.h"

void spawn_random_enemy()
{
  vec2 old_pos = cursor_vec2();
  while (true){
  move(main_screen_starting_y+(rand() % MAIN_SCREEN_ROWS),
     main_screen_starting_x+(rand() % MAIN_SCREEN_COLS));
  if (inch()==' ')
    break;
  }
  addch(ENEMY_NORMAL);
  vmove(old_pos);
}
