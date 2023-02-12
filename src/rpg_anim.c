/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"

void player_rpg_art(int x, int y);
void demon_rpg_art(int x, int y);
void pentagram_rpg_art(int x, int y);
void brimstone_rpg_art(int x, int y);
void satan_rpg_art(int x, int y);
void Bat_art(int x, int y, int decal);
void jesus_kiss(int x, int y, int decal);
void heal_anim(int x, int y, int decal);
void citation_art(int x, int y, int *decal, int *go_right, int cit_index);
void player_tag(int x, int y, int hp, int mp, char *name);

void bat_attack_anim(int monster_type, int stage)
{
    int decal = 0;
    clear();
    while (decal < 120) {
        refresh();
        attron(COLOR_PAIR(4));
        Bat_art(COLS / 2, LINES / 2, decal);
        attron(COLOR_PAIR(7));
        player_rpg_art(COLS / 2, LINES / 2);
        if (monster_type == 4) {
            attron(COLOR_PAIR(stage));
            satan_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 3) {
            attron(COLOR_PAIR(1));
            brimstone_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 2) {
            attron(COLOR_PAIR(6));
            pentagram_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 1) {
            attron(COLOR_PAIR(5));
            demon_rpg_art(COLS / 2, LINES / 2);
        }
        decal++;
        usleep(5000);
    }
    attron(COLOR_PAIR(7));
}

void citation_attack_anim(int monster_type, int stage)
{
    int decal = 0, go_right = 0, cit_index = rand() % 6;
    clear();
    attron(COLOR_PAIR(7));
    player_rpg_art(COLS / 2, LINES / 2);
    if (monster_type == 4) {
        attron(COLOR_PAIR(stage));
        satan_rpg_art(COLS / 2, LINES / 2);
    }
    if (monster_type == 3) {
        attron(COLOR_PAIR(1));
        brimstone_rpg_art(COLS / 2, LINES / 2);
    }
    if (monster_type == 2) {
        attron(COLOR_PAIR(6));
        pentagram_rpg_art(COLS / 2, LINES / 2);
    }
    if (monster_type == 1) {
        attron(COLOR_PAIR(5));
        demon_rpg_art(COLS / 2, LINES / 2);
    }
    while (go_right < 2) {
        refresh();
        attron(COLOR_PAIR(1));
        citation_art(COLS / 2, LINES / 2, &decal, &go_right, cit_index);
        attron(COLOR_PAIR(7));
        player_rpg_art(COLS / 2, LINES / 2);
        if (monster_type == 4) {
            attron(COLOR_PAIR(stage));
            satan_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 3) {
            attron(COLOR_PAIR(1));
            brimstone_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 2) {
            attron(COLOR_PAIR(6));
            pentagram_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 1) {
            attron(COLOR_PAIR(5));
            demon_rpg_art(COLS / 2, LINES / 2);
        }
    }
    attron(COLOR_PAIR(7));
}

void kiss_attack_anim(int monster_type, int stage)
{
    int decal = 0;
    clear();
    while (decal < 30) {
        refresh();
        attron(COLOR_PAIR(3));
        jesus_kiss(COLS / 2, LINES / 2, decal);
        attron(COLOR_PAIR(7));
        player_rpg_art(COLS / 2, LINES / 2);
        if (monster_type == 4) {
            attron(COLOR_PAIR(stage));
            satan_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 3) {
            attron(COLOR_PAIR(1));
            brimstone_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 2) {
            attron(COLOR_PAIR(6));
            pentagram_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 1) {
            attron(COLOR_PAIR(5));
            demon_rpg_art(COLS / 2, LINES / 2);
        }
        decal++;
        usleep(50000);
    }
    attron(COLOR_PAIR(7));
}

void prayer_anim(int monster_type, int stage)
{
    int decal = 0;
    clear();
    while (decal < 40) {
        refresh();
        attron(COLOR_PAIR(2));
        heal_anim(COLS / 2, LINES / 2, decal);
        attron(COLOR_PAIR(7));
        player_rpg_art(COLS / 2, LINES / 2);
        if (monster_type == 4) {
            attron(COLOR_PAIR(stage));
            satan_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 3) {
            attron(COLOR_PAIR(1));
            brimstone_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 2) {
            attron(COLOR_PAIR(6));
            pentagram_rpg_art(COLS / 2, LINES / 2);
        }
        if (monster_type == 1) {
            attron(COLOR_PAIR(5));
            demon_rpg_art(COLS / 2, LINES / 2);
        }
        decal++;
        usleep(50000);
    }
    attron(COLOR_PAIR(7));
}

void anim_attack_rpg(int option, int monster_type, int stage)
{
    if (option == 1) bat_attack_anim(monster_type, stage);
    if (option == 2) citation_attack_anim(monster_type, stage);
    if (option == 3) kiss_attack_anim(monster_type, stage);
    if (option == 4) prayer_anim(monster_type, stage);
}
