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

superhero init_data (char *filepath)
{
    superhero data;
    data.map = filepath_to_arr(filepath);
    data.shift_map = 0;
    data.y_player = 3;
    data.jump = 0;
    data.coin = 0;
    data.window_idx = W_LORE;
    data.input = 0;
    data.bats_remaning = 5;
    data.bats = NULL;
    data.win_option = 0;
    data.y_cross = -4;
    data.decal_jesus = 150;
    return data;
}

void geometry_dash(char *filepath)
{
    superhero data = init_data(filepath);
    nodelay(stdscr, TRUE);
    while (checkInput(&data)) {
        refresh();
        clear();
        what_window(&data);
    }
    free_my_arr(data.map);
    while (data.bats) {
        bat *tmp = data.bats;
        data.bats = data.bats->next;
        free(tmp);
    }
}

int change_button (bool up, int value)
{
    if (up) {
        value++;
        if (value == 3)
            value = 0;
    } else {
        value--;
        if (value == -1)
            value = 2;
    }
    return value;
}

int main (int ac, char **av)
{
    initscr();
    start_color();
    // superhero data = init_data(av[1]);
    keypad(stdscr, TRUE);
    noecho();
    init_pair(1, COLOR_YELLOW, COLOR_BLACK);
    init_pair(2, COLOR_GREEN, COLOR_BLACK);
    init_pair(3, COLOR_CYAN, COLOR_BLACK);
    init_pair(4, COLOR_BLUE, COLOR_BLACK);
    init_pair(5, COLOR_MAGENTA, COLOR_BLACK);
    init_pair(6, COLOR_RED, COLOR_BLACK);
    init_pair(7, COLOR_WHITE, COLOR_BLACK);
    // while (checkInput(&data)) {
    //     refresh();
    //     clear();
    //     what_window(&data);
    // }
    int input = 'r';
    int what_button_is = 0;
    while (1) {
        int x = COLS / 2;
        int y = LINES / 2;
        mvprintw(0 + y - 6, x - 24, "  ____                        _   _                ");
        mvprintw(1 + y - 6, x - 24, " / ___| _   _ _ __   ___ _ __| | | | ___ _ __ ___  ");
        mvprintw(2 + y - 6, x - 24, " \\___ \\| | | | '_ \\ / _ \\ '__| |_| |/ _ \\ '__/ _ \\ ");
        mvprintw(3 + y - 6, x - 24, "  ___) | |_| | |_) |  __/ |  |  _  |  __/ | | (_) |");
        mvprintw(4 + y - 6, x - 24, " |____/ \\__,_| .__/ \\___|_|  |_| |_|\\___|_|  \\___/ ");
        mvprintw(5 + y - 6, x - 24, "             |_|                                   ");
        if (input == KEY_UP || input == 'z')
            what_button_is = change_button(0, what_button_is);
        if (input == KEY_DOWN || input == 's')
            what_button_is = change_button(1, what_button_is);
        if (input == ' ' && what_button_is == 0)
            geometry_dash(av[1]);
        if (input == ' ' && what_button_is == 1)
            debut_rpg(av[2]);
        if (input == ' ' && what_button_is == 2) {
            endwin();
            return ac <= 2 ? 0 : 1;
        }
        mvprintw(y + 1, x - 15 / 2, "%sRun to Jesus", what_button_is == 0 ? "->" : "");
        mvprintw(y + 2, x - 15 / 2, "%sFight demons", what_button_is == 1 ? "->" : "");
        mvprintw(y + 3, x - 7 / 2, "%sQuit", what_button_is == 2 ? "->" : "");
        input = getch();
        usleep(100000);
        clear();
    }
}
