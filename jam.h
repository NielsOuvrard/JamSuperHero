/*
** EPITECH PROJECT, 2022
** my.h
** File description:
** contain all functions
*/

#ifndef TEST
    #define TEST
    #include <fcntl.h>
    #include <sys/stat.h>
    #include <stdlib.h>
    #include <unistd.h>
    #include <curses.h>
    #include <ncurses.h>

typedef struct jeux {
    int x;
    int y;
    int ax;
    int ay;
    int partie;
    int combat;
    char **map;
} jeux;
char **my_str_to_word_array(char const *str);
void perso_left(jeux *perso);
void perso_right(jeux *perso);
void perso_down(jeux *perso);
void perso_up(jeux *perso);
void my_putstrstr(char **src);
void my_putstr(char const *str);
void my_putchar(char c);
int my_put_nbr(int nb);
#endif /* TEST */
