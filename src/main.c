/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"
#include "../include/superhero.h"

int checkInput (superhero *data)
{
    data->input = getch();
    if (data->input == ' ' && data->window_idx == W_GAME &&
    data->jump == 0 && is_at_ground(data)) {
        data->jump = JUMP_FORCE;
    }
    if (data->input == 'q') {
        return 0;
    }
    if (data->input == 'd' && data->window_idx == W_GAME) {
        throw_bat(data);
    }
    if (data->window_idx == W_JESUS && data->input == ' ') {
        return 0;
    }
    if (data->win_option == O_WIN && data->input == ' ') {
        data->window_idx = W_JESUS;
        data->win_option = 0;
    }
    if (data->window_idx == W_LOOSE  && data->input == ' ') {
        return 0;
    }
    return 1;
}

superhero init_data (char **av)
{
    superhero data;
    data.map = filepath_to_arr(av[1]);
    data.shift_map = 0;
    data.y_player = 3;
    data.jump = 0;
    data.coin = 0;
    data.window_idx = 0;
    data.input = 0;
    data.bats_remaning = 5;
    data.bats = NULL;
    data.win_option = 0;
    data.y_cross = -4;
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_CYAN, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_RED, COLOR_BLACK);
    return data;
}

int main (int ac, char **av)
{
    initscr();
    start_color();
    superhero data = init_data(av);
    nodelay(stdscr, TRUE);
    noecho();
    while (checkInput(&data)) {
        refresh();
        clear();
        what_window(&data);
    }
    endwin();
    free_my_arr(data.map);
    while (data.bats) {
        bat *tmp = data.bats;
        data.bats = data.bats->next;
        free(tmp);
    }
    return ac <= 2 ? 0 : 1;
}
