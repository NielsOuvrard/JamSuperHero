/*
** EPITECH PROJECT, 2023
** jam superheros
** File description:
** mais
*/

#include "../include/my.h"
#include "../include/superhero.h"
#include <fcntl.h>

void win_condition(jeux *perso)
{
    if (perso->y == 0 && perso->x == 85) {
        perso->partie = -1;
    }
}

void afficher_map(jeux *perso)
{
    for (int i = 0; perso->map[i] ; i++) {
        printw(perso->map[i]);
    }
}

jeux *init_pos_perso(char **map, jeux *perso)
{
    perso = malloc(sizeof(jeux));
    perso->partie = 100;
    perso->map = map;
    perso->deja_fait = 0;
    int x = 0, y = 0;
    while (map[x] != NULL) {
        if (map[x][y] == 'P') {
            perso->x = y;
            perso->y = x;
            return (perso);
        }
        if (map[x][y] == '\0') {
            x++; y = 0;
        }
        y++;
    }
    return (perso);
}

void mouvement(int key, jeux *perso)
{
    if (key == KEY_UP)
        perso_up(perso);
    if (key == KEY_DOWN)
        perso_down(perso);
    if (key == KEY_RIGHT)
        perso_right(perso);
    if (key == KEY_LEFT)
        perso_left(perso);
    if (key == 32)
        perso->partie = 0;
}

void affichage_jeux(char **map)
{
    jeux *perso = init_pos_perso(map, perso);
    int key = 0;
    refresh();
    afficher_map(perso);
    while (perso->partie >= 0) {
        key = getch();
        mouvement(key, perso);
        win_condition(perso);
        clear();
        afficher_map(perso);
        usleep(50000);
        refresh();
    }
    endwin();
    exit(0);
}

void debut_rpg(char *filepath)
{
    int fd = 0;
    fd = open(filepath, O_RDONLY);
    if (fd <= 0) {
        return;
    }
    char *buffer = malloc(sizeof(char) * 2906);
    read(fd, buffer, 2906);
    buffer[2905] = '\0';
    close(fd);
    char **map = my_str_to_word_array(buffer);
    affichage_jeux(map);
}
