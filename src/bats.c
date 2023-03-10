/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"
#include "../include/superhero.h"

void new_bat (superhero *data)
{
    bat *new = malloc(sizeof(bat));
    new->x = POS_X_PLAYER;
    new->y = data->y_player;
    new->next = data->bats;
    data->bats = new;
}

void throw_bat (superhero *data)
{
    if (data->bats_remaning > 0) {
        data->bats_remaning--;
        new_bat(data);
    }
}

bat *destroy_bat (bat *exp, int idx)
{
    if (idx == 0) {
        bat *tmp = exp;
        exp = exp->next;
        free(tmp);
        return exp;
    }
    bat *begin = exp;
    bat *prev;
    while (exp && exp->next && idx) {
        idx--;
        prev = exp;
        exp = exp->next;
    }
    bat *tmp = exp;
    prev->next = exp->next;
    free(tmp);
    return begin;
}

void destroy_wall (superhero *data, int y, int x)
{
    data->map[y][x + data->shift_map] = ' ';
    if (y > 0 && data->map[y - 1][x + data->shift_map] == 'W')
        destroy_wall(data, y - 1, x);
    if (data->map[y + 1] && data->map[y + 1][x + data->shift_map] == 'W')
        destroy_wall(data, y + 1, x);
    if (x + data->shift_map > 0 && data->map[y][x + data->shift_map - 1] == 'W')
        destroy_wall(data, y, x - 1);
    if (data->map[y][x + data->shift_map + 1] == 'W')
        destroy_wall(data, y, x + 1);
}

void ahead_bat (superhero *data)
{
    bat *exp = data->bats;
    bat *begin = data->bats;
    for (int i = 0; exp; i++) {
        if (data->map[exp->y][exp->x + data->shift_map] == 'W') {
            destroy_wall(data, exp->y, exp->x);
            begin = destroy_bat(begin, i);
            data->bats_remaning++;
            exp = begin;
            i = -1;
        } else if (!data->map[exp->y][exp->x + data->shift_map] ||
        data->map[exp->y][exp->x + data->shift_map] == 'X') {
            begin = destroy_bat(begin, i);
            data->bats_remaning++;
            exp = begin;
            i = -1;
        }
        if (exp)
            exp = exp->next;
    }
    exp = begin;
    while (exp) {
        if (data->map[exp->y][exp->x + data->shift_map + 1] == ' '
        || data->map[exp->y][exp->x + data->shift_map + 1] == '0') {
            exp->x++;
        }
        exp = exp->next;
    }
    data->bats = begin;
}
