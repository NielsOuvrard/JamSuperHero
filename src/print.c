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
    for (int i = 0; map[i]; i++)
        for (int j = 0; j < COLS && map[i][j + decal]; j++)
            mvprintw(i, j, "%c", map[i][j + decal]);
}

void print_player (int y_player)
{
    if (y_player > 0)
        mvprintw(y_player, POS_X_PLAYER, "@");
}