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
#define KEY_P     (int)'p'
#define KEY_U     (int)'u'
#define KEY_ESC   27

/* MAIN_SCREEN */
#define MAIN_SCREEN_ROWS 20
#define MAIN_SCREEN_COLS 45

/* TUTORIAL_SCREEN */
#define TUTORIAL_SCREEN_ROWS_DIFF 2
#define TUTORIAL_SCREEN_ROWS MAIN_SCREEN_ROWS-TUTORIAL_SCREEN_ROWS_DIFF
#define TUTORIAL_SCREEN_COLS 40
#define TUTORIAL_SCREEN_SIZE (TUTORIAL_SCREEN_ROWS-2)*(TUTORIAL_SCREEN_COLS-2)

/* AMMO */
#define AMMO_SCREEN_ROWS 4
#define AMMO_SCREEN_COLS 30
#define MAX_AMMO AMMO_SCREEN_COLS/2

/* SHOOT */
#define SHOOT_FAIL  0
#define SHOOT_OK    1
#define SHOOT_ENEMY 2

#define STATUS_NONE    (int)' '
#define STATUS_SHOOTED (int)'x'

/* ENEMIES */
#define ENEMY_NORMAL 'o'

/* STRINGS */
#define S_WELCOME "Hi there! Press p to print the tutorial."
#define S_TUTORIAL "->Move with 'k-h-j-l'/->Shoot with 'space' /->Reload with 'i'/->Print this with 'p' /->Clean this screen with 'u'/->Exit with 'escape'"

/* CONTROLS */
#define KEY_MOVE_UP    KEY_K
#define KEY_MOVE_RIGHT KEY_L
#define KEY_MOVE_DOWN  KEY_J
#define KEY_MOVE_LEFT  KEY_H
#define KEY_SHOOT      KEY_SPACE
#define KEY_RELOAD     KEY_I
#define KEY_TUTORIAL   KEY_P
#define KEY_CLEAN      KEY_U
#define KEY_ESCAPE     KEY_ESC

/* SCORE_SCREEN */
#define SCORE_SCREEN_ROWS 4
#define SCORE_SCREEN_COLS 40

#endif /* DEFINES_H_INCLUDED */
