/*
** EPITECH PROJECT, 2023
** jam / superheros
** File description:
** combat en rpg
*/
#include "../include/my.h"
#include "../include/superhero.h"

void combat(jeux *perso)
{
    nodelay(stdscr, FALSE);
    if (perso->deja_fait == 0) {
        perso->partie = combat_brimstone(perso->partie);
        perso->deja_fait++;
        return;
    }
    if (perso->deja_fait == 1) {
        perso->partie = combat_pentagram(perso->partie);
        perso->deja_fait++;
        return;
    }
    if (perso->deja_fait == 2) {
        perso->partie = combat_devil(perso->partie);
        perso->deja_fait++;
        return;
    }
    perso->partie = combat_satan(perso->partie);
    return;
}