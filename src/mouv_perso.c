/*
** EPITECH PROJECT, 2022
** sokoban
** File description:
** mouv perso
*/
#include "../include/my.h"
#include "../include/superhero.h"

void perso_left(jeux *perso)
{
    if (perso->map[perso->y][perso->x - 1] == '#') {
        return;
    }
    if (perso->map[perso->y][perso->x - 1] == 'E') {
        combat(perso);
        if (perso->partie == 0) {
            /*fin_partie()*/;
        } else {
            perso->map[perso->y][perso->x - 1] = ' ';
        }
        return;
    }
    perso->map[perso->y][perso->x] = ' ';
    perso->map[perso->y][perso->x - 1] = 'P';
    perso->x -= 1;
}

void perso_right(jeux *perso)
{
    if (perso->map[perso->y][perso->x + 1] == '#') {
        return;
    }
    if (perso->map[perso->y][perso->x + 1] == 'E') {
        combat(perso);
        if (perso->partie == 0) {
            /*fin_partie()*/;
        } else {
            perso->map[perso->y][perso->x + 1] = ' ';
        }
        return;
    }
    perso->map[perso->y][perso->x] = ' ';
    perso->map[perso->y][perso->x + 1] = 'P';
    perso->x += 1;
}

void perso_down(jeux *perso)
{
    if (perso->map[perso->y + 1][perso->x] == '#') {
        return;
    }
    if (perso->map[perso->y + 1][perso->x] == 'E') {
        combat(perso);
        if (perso->partie == 0) {
            /*fin_partie()*/;
        } else {
            perso->map[perso->y + 1][perso->x] = ' ';
        }
        return;
    }
    perso->map[perso->y][perso->x] = ' ';
    perso->map[perso->y + 1][perso->x] = 'P';
    perso->y += 1;
}

void perso_up(jeux *perso)
{
    if (perso->map[perso->y - 1][perso->x] == '#') {
        return;
    }
    if (perso->map[perso->y - 1][perso->x] == 'E') {
        combat(perso);
        if (perso->partie == 0) {
            /*fin_partie()*/;
        } else {
            perso->map[perso->y - 1][perso->x] = ' ';
        }
        return;
    }
    perso->map[perso->y][perso->x] = ' ';
    perso->map[perso->y - 1][perso->x] = 'P';
    perso->y -= 1;
}
