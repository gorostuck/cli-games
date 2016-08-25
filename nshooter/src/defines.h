// This file contains constants for several purposes
#ifndef DEFINES_H_DEFINED
#define DEFINES_H_DEFINED

/* MACROS */
//#define DEBUG_MODE

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

/* TUTORIAL_SCREEN */
#define TUTORIAL_SCREEN_ROWS_DIFF 2
#define TUTORIAL_SCREEN_ROWS MAIN_SCREEN_ROWS-TUTORIAL_SCREEN_ROWS_DIFF
#define TUTORIAL_SCREEN_COLS 20
#define TUTORIAL_SCREEN_SIZE (TUTORIAL_SCREEN_ROWS-2)*(TUTORIAL_SCREEN_COLS-2)

/* AMMO */
#define AMMO_SCREEN_ROWS 4
#define AMMO_SCREEN_COLS 30
#define MAX_AMMO AMMO_SCREEN_COLS/2

/* SHOOT */
#define SHOOT_FAIL 0
#define SHOOT_OK   1

#define STATUS_NONE    (int)' '
#define STATUS_SHOOTED (int)'x'

/* CHARS */
#define CHAR_NULL ' '

/* STRINGS */
#define S_WELCOME "Hi there! Press any key to start playing"
#define S_GAME_START "*****GAME START*****"

/* CONTROLS */
#define KEY_SHOOT      KEY_SPACE

#define KEY_RELOAD     KEY_I

#define KEY_MOVE_UP    KEY_K
#define KEY_MOVE_RIGHT KEY_L
#define KEY_MOVE_DOWN  KEY_J
#define KEY_MOVE_LEFT  KEY_H

#endif /* DEFINES_H_INCLUDED */
