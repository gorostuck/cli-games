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
    move(TOTAL_SCREEN_ROWS/2, TOTAL_SCREEN_COLS/2);

    init_ammo();
    while (game_loop());

    destroy_win(main_screen);

    endwin();

    return 0;
}

int game_loop()
{
    getyx(main_screen, current_y, current_x);
    getch();
    if (try_shoot()==0) return 0;
    render_ammo();
    refresh();
    return 1;
}

int read_input(int k)
{
  try_shoot();
  return k;
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

// DUMPSTER
/*
int move_within_border()
{
    int ch = getch();
    switch(ch)
    {
        case KEY_UP:
            printw("%d", current_y);
            if (current_y < MAX_Y){
                move(++current_y, current_x);
                return 0;
            }
            break;
        case KEY_LEFT:
            if (current_x > 0){
                move(current_y, ++current_x);
                return 0;
            }
            break;
        case KEY_DOWN:
            if (current_x < MAX_X){
                move(--current_y, current_x);
                return 0;
            }
            break;
        case KEY_RIGHT:
            if (current_y > 0){
                move(current_y, current_x++);
            }
        default:
            break;
    }
    return 1;
}
*/

