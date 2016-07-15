#include "ammo.h"
#include "main_screen.h"

void init_ammo()
{
    current_ammo = MAX_AMMO;
    ammo_screen = create_newwin(AMMO_SCREEN_ROWS, AMMO_SCREEN_COLS, TOTAL_SCREEN_ROWS/2 + MAIN_SCREEN_ROWS/2, TOTAL_SCREEN_COLS/2 + MAIN_SCREEN_COLS/2);
}
