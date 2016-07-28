// This file contains constants for several purposes
#ifndef CONSTANTS_H_DEFINED
#define CONSTANTS_H_DEFINED

/* MACROS */
#define DEBUG_MODE

/* DIRECTIONS */
#define DIR_NONE  0
#define DIR_LEFT  1
#define DIR_RIGHT 2
#define DIR_DOWN  3
#define DIR_UP    4

/* BORDERS */
#define BORDER_TOP    0
#define BORDER_LEFT   1
#define BORDER_RIGHT  2
#define BORDER_BOTTOM 3

/* KEYS */
#define KEY_SPACE (int)' '

#define KEY_K     (int)'k'
#define KEY_J     (int)'j'
#define KEY_H     (int)'h'
#define KEY_L     (int)'l'

#define KEY_I     (int)'i'

/* MAIN_SCREEN */
#define MAIN_SCREEN_ROWS 20
#define MAIN_SCREEN_COLS 45

/* AMMO */
#define AMMO_SCREEN_ROWS 4
#define AMMO_SCREEN_COLS 30
#define MAX_AMMO AMMO_SCREEN_COLS/2

/* SHOOT */
#define SHOOT_FAIL 0
#define SHOOT_OK   0

#define STATUS_NONE    (int)' '
#define STATUS_SHOOTED (int)'x'

/* STRINGS */
#define S_WELCOME "Hi tehre! Press any key to start playing"
#define S_GAME_START "*****GAME START*****"

#endif //CONSTANTS_H_DEFINED
