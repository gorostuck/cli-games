#include "game.h"

#include <string.h>
#include "window.h"



int game_start()
{

    load_constants();

    initscr();
    getmaxyx(stdscr, ROWS, COLS);
    cbreak();

    print_in_middle(ROWS, COLS, S_WELCOME);
    move(0,0);

    refresh();
    getch();
    endwin();

    return 0;
}

void load_constants()
{
    S_WELCOME = "Hi there! Press any key to start playing!";
}

