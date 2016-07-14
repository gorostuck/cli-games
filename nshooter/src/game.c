#include "game.h"

#include <string.h>
#include "window.h"



int game_start()
{
    init();

    print_in_middle(ROWS, COLS, S_WELCOME);
    move(0,0);
    getch();

    main_window = window_in_middle(MAX_Y, MAX_X, ROWS, COLS);
    move(ROWS/2, COLS/2);

    while (game_loop());

    destroy_win(main_window);

    endwin();

    return 0;
}

int game_loop()
{
    getyx(main_window, current_y, current_x);
    while(read_input());
    refresh();
    return 1;
}

int read_input(int k)
{

}

void init()
{
    load_constants();
    initscr();
    cbreak();
    noecho();
    getmaxyx(stdscr, ROWS, COLS);

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

