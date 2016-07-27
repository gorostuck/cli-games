// This file contains constants for several purposes
#ifndef CONSTANTS_H_DEFINED
#define CONSTANTS_H_DEFINED

/* MACROS */
//#define DEBUG_MODE

/* DIRECTIONS */
#define NONE  0
#define LEFT  1
#define RIGHT 2
#define DOWN  3
#define UP    4

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

/* SHOOT */
#define SHOOT_NO_AMMO 0
#define SHOOT_OK      1

#define MAX_AMMO AMMO_SCREEN_COLS/2


#endif //CONSTANTS_H_DEFINED
