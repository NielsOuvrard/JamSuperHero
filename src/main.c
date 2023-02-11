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
    // if (input == ERR)
    //     return 0;

    // TODO move to input game funct
    if (data->input == ' ' && data->jump == 0 && is_at_ground(data)) {
        data->jump = JUMP_FORCE;
        return 1;
    }
    if (data->input == 'q') {
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
    return data;
}

int main (int ac, char **av)
{
    initscr();
    superhero data = init_data(av);
    nodelay(stdscr, TRUE);
    int input;
    while ((input = checkInput(&data))) {
        refresh();
        clear();
        what_window(&data);
    }
    endwin();
    free_my_arr(data.map);
    return 0;
}