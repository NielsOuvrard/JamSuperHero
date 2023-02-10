/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"

char **filepath_to_arr (char *filepath);


int main (int ac, char **av)
{
    char **val = filepath_to_arr(av[1]);

    free_my_arr(val);
    // NcursesInt data(argc, argv, env);
    // for (size_t i = 0; i <= data._infos->Get_nbProcessor(); i++) {
    //     init_pair(i + 4, i + 1, COLOR_BLACK);
    // }
    // int beginInput = '\0';
    // while (beginInput != 'a' && beginInput != ' ')
    //     beginInput = window_start(COLS / 2, LINES / 2);
    // clear();
    // nodelay(stdscr, TRUE);
    // delete data._infos;
    // while (data._isRunning) {
    //     chooseWindow(data);
    //     int input = getch();
    //     if (input != ERR)
    //         checkInput(data, input);
    //     refresh();
    //     clear();
    //     goToSleep();
    // }
    // endwin();
    return 0;
}