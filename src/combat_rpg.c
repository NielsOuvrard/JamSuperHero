/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"
#include <time.h>

void player_rpg_art(int x, int y);
void demon_rpg_art(int x, int y);
void player_tag(int x, int y, int hp, int mp, char *name);
void ennemi_tag(int x, int y, int hp, char *name);
void show_attack_option(int x, int y, int option);

void Imput_rpg(int *option, int *enter)
{
    int imput = getch();
    if (imput == KEY_DOWN && *option < 4) {
        (*option)++;
    }
    if (imput == KEY_UP && *option > 1) {
        (*option)--;
    }
    if (imput == ' ') {
        *enter = 1;
    }
}

void attack(int *player_hp, int *player_mp, int *ennemi_hp, int ennemi_max_hp, int ennemi_attack, char *ennemi_name, int option, int x, int y)
{
    int dammage = 0, critique = 0, ennemi_option = 0;
    srand(time(NULL));
    if (option == 1) {
        dammage = -10;
        mvprintw(y + 20, x - 10, "Holybat does %d damage", dammage * -1);
    } if (option == 2) {
        if (*player_mp > 9) {
            dammage = -10 + ((rand() % 21) * -1);
            (*player_mp) += -10;
            mvprintw(y + 20, x - 10, "Holybat does %d damage", dammage * -1);
        } else {
            mvprintw(y + 20, x - 10, "Holybat doesn't have enough MP");
        }
    }
    if (option == 3) {
        if (*player_mp > 100) {
            mvprintw(y + 20, x - 10, "Holybat is full MP");
        } else {
            (*player_mp) += 30;
            if (*player_mp > 100) {
                (*player_mp) = 100;
            }
            mvprintw(y + 20, x - 10, "Holybat gain 30 MP");
        }
    }
    if (option == 4) {
        if (*player_mp > 19) {
            if (*player_hp > 100) {
                mvprintw(y + 20, x - 10, "Holybat is full HP");
            } else {
                (*player_hp) += 30;
                (*player_mp) += -20;
                if (*player_hp > 100) {
                    (*player_hp) = 100;
                }
                mvprintw(y + 20, x - 10, "Holybat gain 30 HP");
            }
        } else {
            mvprintw(y + 20, x - 10, "Holybat doesn't have enough MP");
        }
    }
    critique = rand() % 21;
    if (critique > 14 && option < 3) {
        dammage = dammage * 2;
        mvprintw(1 + y + 20, x - 10, "Critical : %d damage", dammage * -1);
    }
    (*ennemi_hp) += dammage;
    if (*ennemi_hp <= 0) {
        mvprintw(2 + y + 20, x - 10, "%s is dead", ennemi_name);
        getch();
        return;
    }
    dammage = 0;
    ennemi_option = rand() % 3;
    if (ennemi_option == 0) {
        dammage = ennemi_attack;
        mvprintw(2 + y + 20, x - 10, "%s does %d damage", ennemi_name, dammage * -1);
    }
    if (ennemi_option == 1) {
        dammage = ennemi_attack + ((rand() % 11) * -1);
        mvprintw(2 + y + 20, x - 10, "%s does %d damage", ennemi_name, dammage * -1);
    }
    if (ennemi_option == 2) {
        if (*ennemi_hp > ennemi_max_hp) {
            mvprintw(2 + y + 20, x - 10, "%s is full HP", ennemi_name);        
        } else {
            (*ennemi_hp) += ennemi_attack * -1;
            if (*ennemi_hp > ennemi_max_hp) {
                (*ennemi_hp) = ennemi_max_hp;
            }
            mvprintw(2 + y + 20, x - 10, "%s gain %d HP", ennemi_name, ennemi_attack * -1);
        }
    }
    critique = rand() % 21;
    if (critique > 18 && ennemi_option < 2) {
        dammage = dammage * 2;
        mvprintw(3 + y + 20, x - 10, "%s Critical, %d damages", ennemi_name, dammage * -1);
    }
    (*player_hp) += dammage;
    if (*player_hp <= 0) {
        mvprintw(4 + y + 20, x - 10, "Holybat is dead");
    }
    getch();
}

int combat_devil(int player_hp)
{
    int player_mp = 100, ennemi_hp = 50, ennemi_attack = -15;
    int option = 1, enter = 0;
    char *ennemi_name = "Devil";
    while (player_hp > 0 && ennemi_hp > 0) {
        clear();
        attron(COLOR_PAIR(7));
        player_rpg_art(COLS / 2, LINES / 2);
        player_tag(COLS / 2, LINES / 2, player_hp, player_mp, "Holybat");
        attron(COLOR_PAIR(5));
        demon_rpg_art(COLS / 2, LINES / 2);
        attron(COLOR_PAIR(7));
        ennemi_tag(COLS / 2, LINES / 2, ennemi_hp, ennemi_name);
        show_attack_option(COLS / 2, LINES / 2, option);
        Imput_rpg(&option, &enter);
        if (enter == 1) {
            attack(&player_hp, &player_mp, &ennemi_hp, 50, ennemi_attack, ennemi_name, option, COLS / 2, LINES / 2);
            enter = 0;
        }
        usleep(100000);
    }
    if (player_hp > 0) player_hp += 50;
    return player_hp;
}