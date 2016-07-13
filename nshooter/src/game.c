#include "game.h"

#include <string.h>
#include "window.h"


int game_start()
{
    S_WELCOME = "Hi there! Press any key to start playing!";

    initscr();
    getmaxyx(stdscr, ROWS, COLS);
    cbreak();

    mvprintw(ROWS/2, (COLS-strlen(S_WELCOME))/2, "%s", S_WELCOME);
    move(0,0);

    refresh();
    getch();
    endwin();

    return 0;
}
