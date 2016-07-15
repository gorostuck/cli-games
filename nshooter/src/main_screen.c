#include "main_screen.h"

void init_main_screen(int ROWS, int COLS)
{
    main_screen = window_in_middle(MAIN_SCREEN_ROWS, MAIN_SCREEN_COLS, ROWS, COLS);
}
