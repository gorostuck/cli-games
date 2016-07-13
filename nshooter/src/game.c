#include "game.h"

#include <string.h>
#include "window.h"



int game_start()
{
    init();

    print_in_middle(ROWS, COLS, S_WELCOME);
    move(0,0);
    getch();

    while (game_loop());

    endwin();
    return 0;
}

int game_loop()
{
    WINDOW *main_window = window_in_middle(20, 45, ROWS, COLS);
    print_in_middle(ROWS, COLS, S_GAME_START);
    move(0,0);
    getch();
    destroy_win(main_window);
    return 0;
}

void init()
{
    load_constants();
    initscr();
    getmaxyx(stdscr, ROWS, COLS);
}

void load_constants()
{
    S_WELCOME = "Hi there! Press any key to start playing!";
    S_GAME_START= "*****GAME START*****";
}

