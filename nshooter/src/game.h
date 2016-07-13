#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

char* S_WELCOME;
char* S_GAME_START;

int ROWS;
int COLS;

int game_start();
int game_loop();
void init();
void load_constants();

#endif
