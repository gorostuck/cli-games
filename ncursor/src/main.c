#include <ncurses.h>

WINDOW *create_newwin(int height, int width, int starty, int startx);
void destroy_win(WINDOW *local_win);

int main(int argc, char *argv[])
{   WINDOW *my_win;
    int startx, starty, width, height;
    
    initscr();                          // Start curses mode
    cbreak();                           // Line buffering disabled

    height = 3;
    width = 10;
    starty = (LINES - height) / 2;       // Calculating for a center placement
    startx = (COLS - width) / 2;
    printw("HEY!");
    refresh();
    my_win = create_newwin(width, width, starty, startx);
    getch();
    destroy_win(my_win);
    endwin();
    return 0;
}

WINDOW *create_newwin(int height, int width, int starty, int startx)
{   WINDOW *local_win;
    
    local_win = newwin(height, width, starty, startx);
    box(local_win, 0, 0);

    wrefresh(local_win);

    return local_win;
}

void destroy_win(WINDOW *local_win)
{
    wborder(local_win, ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' ');
    wrefresh(local_win);
    delwin(local_win);
}
