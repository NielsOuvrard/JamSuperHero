/*
** EPITECH PROJECT, 2023
** SUPERHERO
** File description:
** SUPERHERO
*/

#pragma once

typedef struct superhero {
    int window_idx;
    char **map;
    int input;
    int shift_map;
    int y_player;
    int jump;
    int coin;
} superhero;

#define GRAVITY 2
#define POS_X_PLAYER 5
#define JUMP_FORCE 5

// * WINDOW
#define W_START     0
#define W_GAME      1
#define W_WIN       2
#define W_LOOSE     3


char **filepath_to_arr (char *filepath);


// * //////////////////////////////////////////////////////////////////// WINDOW

void what_window (superhero *data);


// * ///////////////////////////////////////////////////////////////////// EVENT

void gravity (superhero *data);

void player_stair (superhero *data);

void get_coin (superhero *data);

bool is_at_ground (superhero *data);


// * ///////////////////////////////////////////////////////////////////// PRINT

void print_map (char **map, int decal);

void print_player (int y_player);
