// This file contains the declaration for the main game's process
#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED



int game_start();
int game_loop();
int read_input(int KEY);

void init();
void init_ncurses();
void init_screens();
void destroy_windows();
void print_score();

void print_debug_stuff();

#endif /* GAME_H_INCLUDED */
