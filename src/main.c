/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"

char **filepath_to_arr (char *filepath);



int window_start(int x, int y)
{
    clear();
    mvprintw(0 + y - 6, x - 24, "  ____                        _   _                ");
    mvprintw(1 + y - 6, x - 24, " / ___| _   _ _ __   ___ _ __| | | | ___ _ __ ___  ");
    mvprintw(2 + y - 6, x - 24, " \\___ \\| | | | '_ \\ / _ \\ '__| |_| |/ _ \\ '__/ _ \\ ");
    mvprintw(3 + y - 6, x - 24, "  ___) | |_| | |_) |  __/ |  |  _  |  __/ | | (_) |");
    mvprintw(4 + y - 6, x - 24, " |____/ \\__,_| .__/ \\___|_|  |_| |_|\\___|_|  \\___/ ");
    mvprintw(5 + y - 6, x - 24, "             |_|                                   ");
    mvprintw(10 + y - 6, x - 6, "Run Software");
    mvprintw(11 + y - 6, x - 4, "[Space]");
    return getch();
}

int checkInput (void)
{
    int input = getch();
    if (input == ERR)
        return 0;
    if (input == ' ') {
        printw("okok");
        return 1;
    }
    if (input == 'q') {
        return 0;
    }
    return 1;
}

int main (int ac, char **av)
{

    initscr();              // Initialise la structure WINDOW et autres paramètres 
    char **val = filepath_to_arr(av[1]);
    // for (int i = 0; val[i]; i++)
    //     my_printf("%s\n", val[i]);


    int beginInput = '\0';
    while (beginInput != 'a' && beginInput != ' ')
        beginInput = window_start(COLS / 2, LINES / 2);
    clear();

    // nodelay(stdscr, TRUE);
    int input;
    while ((input = checkInput())) {
        refresh();
        clear();
        for (int i = 0; i < 10; i++)
            mvprintw(i, 0, "|");
    }
    endwin();
    free_my_arr(val);
    return 0;
}