/*
** EPITECH PROJECT, 2023
** SUPERHERO
** File description:
** SUPERHERO
*/

#pragma once

typedef struct bat {
    struct bat *next;
    int x;
    int y;
} bat;

typedef struct superhero {
    int window_idx;
    char **map;
    int input;
    int shift_map;
    int y_player;
    int jump;
    int coin;
    int bats_remaning;
    bat *bats;
    int win_option;
    int y_cross;
} superhero;

typedef struct jeux {
    int x;
    int y;
    int partie;
    int combat;
    char **map;
    int deja_fait;
} jeux;

#define GRAVITY 2
#define POS_X_PLAYER 5
#define JUMP_FORCE 5

// * WINDOW
#define W_START     0
#define W_GAME      1
#define W_JESUS     2
#define W_HOLYBAT   3
#define W_LORE      4
#define W_LOOSE     5

#define O_JUST_WIN  1
#define O_WIN       2
#define O_LOOSE     3

char **filepath_to_arr (char *filepath);


// * //////////////////////////////////////////////////////////////////// WINDOW

void what_window (superhero *data);


// * ///////////////////////////////////////////////////////////////////// EVENT

void gravity (superhero *data);

void player_colision (superhero *data);

void get_coin (superhero *data);

bool is_at_ground (superhero *data);


// * ///////////////////////////////////////////////////////////////////// PRINT

void print_map (char **map, int decal);

void print_player (int y_player);

void print_bats (superhero *data);


// * ////////////////////////////////////////////////////////////////////// BATS

void throw_bat (superhero *data);

void ahead_bat (superhero *data);


// * /////////////////////////////////////////////////////////////////////// ART

void display_holybat(void);

void display_jesus(void);

// * //////////////////////////////////////////////////////////////////////// RPG COMBAT

int combat_devil(int player_hp);

int combat_pentagram(int player_hp);

int combat_brimstone(int player_hp);

int combat_satan(int player_hp);

// * /////////////////////////////////////////////////////////////////////// RPG MAP

void debut_rpg(char *filepath);

void perso_left(jeux *perso);

void perso_right(jeux *perso);

void perso_down(jeux *perso);

void perso_up(jeux *perso);

void combat(jeux *perso);