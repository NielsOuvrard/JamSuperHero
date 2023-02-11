/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"
#include "../include/superhero.h"

void print_map (char **map, int decal)
{
    if (my_strlen(map[0]) < decal)
        return;
    for (int i = 0; map[i]; i++) {
        for (int j = 0; j < COLS && map[i][j + decal]; j++) {
            attron(COLOR_PAIR(2));
            if (map[i][j + decal] == '0')
                attron(COLOR_PAIR(1));
            if (map[i][j + decal] == 'W')
                attron(COLOR_PAIR(6));
            mvprintw(i, j, "%c", map[i][j + decal]);
        }
    }
}

void print_player (int y_player)
{
    attron(COLOR_PAIR(5));
    if (y_player > 0)
        mvprintw(y_player, POS_X_PLAYER, "@");
}

void print_bats (superhero *data)
{
    attron(COLOR_PAIR(3));
    bat *exp = data->bats;
    while (exp) {
        mvprintw(exp->y, exp->x, "B");
        exp = exp->next;
    }
}
