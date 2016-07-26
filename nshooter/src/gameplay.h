// This file contains the declaration for the gameplay actions component
#ifndef GAMEPLAY_H_INCLUDED
#define GAMEPLAY_H_INCLUDED

#define NONE  0
#define LEFT  1
#define RIGHT 2
#define DOWN  3
#define UP    4

#define KEY_SHOOT (int)' '

#define KEY_K  (int)'k'
#define KEY_J  (int)'j'
#define KEY_H  (int)'h'
#define KEY_L  (int)'l'

int move_within_borders(int KEY, int y, int x);

#endif // GAMEPLAY_H_INCLUDED
