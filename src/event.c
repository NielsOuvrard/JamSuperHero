/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"
#include "../include/superhero.h"

void gravity (superhero *data)
{
    if (data->jump > 0) {
        data->jump--;
        if (data->y_player > 0 &&
        data->map[data->y_player - 1][POS_X_PLAYER + data->shift_map] != 'X') {
            data->y_player--;
        } else {
            data->jump = 0;
        }
        return;
    }
    if (my_strlen(data->map[0]) < data->shift_map + POS_X_PLAYER)
        return;
    if (data->map[data->y_player + 1] && data->map[data->y_player + 1][POS_X_PLAYER + data->shift_map] == ' ')
        data->y_player++;
}

void player_stair (superhero *data)
{
    if (data->map[data->y_player] && data->map[data->y_player - 1]              // check != NULL
    && data->map[data->y_player][POS_X_PLAYER + data->shift_map + 1] == 'X'     // check next is ground
    && data->map[data->y_player - 1][POS_X_PLAYER + data->shift_map + 1] != 'X' // check next up is not ground
    ) {
        data->y_player--;
    }
}

void get_coin (superhero *data)
{
    if (data->map[data->y_player][POS_X_PLAYER + data->shift_map] == '0') {
        data->map[data->y_player][POS_X_PLAYER + data->shift_map] = ' ';
        data->coin++;
    }
}

bool is_at_ground (superhero *data)
{
    if (data->map[data->y_player + 1] && data->map[data->y_player + 1][POS_X_PLAYER + data->shift_map] == 'X')
        return true;
    return false;
}
