// This file contains the declarations for stuff related to the tutorial screen
#ifndef TUTORIAL_SCREEN_H_DEFINED
#define TUTORIAL_SCREEN_H_DEFINED

#include "window.h"
WINDOW* tutorial_screen;

void init_tutorial_screen();
void print_in_tutorial(const char* str);
void clean_tutorial();

int tutorial_screen_starting_y;
int tutorial_screen_starting_x;

#endif /* TUTORIAL_SCREEN_H_DEFINED */
