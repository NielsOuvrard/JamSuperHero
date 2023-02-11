/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"
#include "../include/superhero.h"

void window_start(superhero *data)
{
    if (data->input == ' ')
        data->window_idx = W_GAME;
    int x = COLS / 2;
    int y = LINES / 2;
    mvprintw(0 + y - 6, x - 24, "  ____                        _   _                ");
    mvprintw(1 + y - 6, x - 24, " / ___| _   _ _ __   ___ _ __| | | | ___ _ __ ___  ");
    mvprintw(2 + y - 6, x - 24, " \\___ \\| | | | '_ \\ / _ \\ '__| |_| |/ _ \\ '__/ _ \\ ");
    mvprintw(3 + y - 6, x - 24, "  ___) | |_| | |_) |  __/ |  |  _  |  __/ | | (_) |");
    mvprintw(4 + y - 6, x - 24, " |____/ \\__,_| .__/ \\___|_|  |_| |_|\\___|_|  \\___/ ");
    mvprintw(5 + y - 6, x - 24, "             |_|                                   ");
    mvprintw(10 + y - 6, x - 6, "Run Software");
    mvprintw(11 + y - 6, x - 4, "[Space]");
    usleep(100000);
}

void window_game (superhero *data)
{
    player_stair(data);
    print_map(data->map, data->shift_map++);
    gravity(data);
    print_player(data->y_player);
    get_coin(data);
    usleep(100000);
}

void what_window (superhero *data)
{
    switch (data->window_idx) {
    case W_START:
        window_start(data);
        break;
    case W_GAME:
        window_game(data);
        break;
    default:
        break;
    }
}
