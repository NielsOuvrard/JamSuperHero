/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"
#include "../include/superhero.h"

void print_cross (int y)
{
    mvprintw(y++, 20, " # ");
    mvprintw(y++, 20, "###");
    mvprintw(y++, 20, " # ");
    mvprintw(y++, 20, " # ");
}

void window_game (superhero *data)
{
    print_map(data->map, data->shift_map);
    print_player(data->y_player);
    print_bats(data);
    usleep(50000);
    attron(COLOR_PAIR(5));
    mvprintw(0, 0, "Biblical quotes : %d", data->coin);
    if (data->win_option == O_JUST_WIN || data->win_option == O_WIN) {
        print_cross(data->y_cross);
        if (data->y_cross < 7) {
            data->y_cross++;
        } else {
            mvprintw(4, 30, "Jesus is evrywhere");
            data->win_option = O_WIN;
        }
        usleep(100000);
        return;
    }
    player_colision(data);
    gravity(data);
    get_coin(data);
    ahead_bat(data);
    if (data->map[0][data->shift_map + 40] == '\0') {
        data->win_option = O_JUST_WIN;
    }
    data->shift_map++;
}

void window_lore (superhero *data)
{
    int x = COLS / 2;
    int y = LINES / 2;
    char str[] = "You're HailBat, the famous superHero who speak to bats, and hear Jesus's voice !";
    char str2[] = "Go find our saver !";
    mvprintw(y, x - (my_strlen(str) / 2), "%s", str);
    mvprintw(y + 1, x - (my_strlen(str2) / 2), "%s", str2);
    if (data->input == ' ')
        data->window_idx = W_HOLYBAT;
    usleep(100000);
}

void Jesus_art(int x, int y, int decal);

void window_win (superhero *data)
{
    Jesus_art(COLS / 2, LINES / 2, data->decal_jesus);
    data->decal_jesus--;
    if (data->decal_jesus < -200)
        data->decal_jesus = 150;
    usleep(100000);
}

void window_HolyBat (superhero *data)
{
    display_holybat();
    data->window_idx = W_GAME;
}

void window_loose ()
{
    int x = COLS / 2;
    int y = LINES / 2;
    char str[] = "Joshua 1:9";
    char str2[] = "Have I not commanded you? Be strong and courageous.";
    char str3[] = "Do not be frightened, and do not be dismayed, for the LORD your God is with you wherever you go.";
    mvprintw(y + 0, x - (my_strlen(str)  / 2), "%s", str);
    mvprintw(y + 1, x - (my_strlen(str2) / 2), "%s", str2);
    mvprintw(y + 2, x - (my_strlen(str3) / 2), "%s", str3);
    usleep(100000);
}

void what_window (superhero *data)
{
    switch (data->window_idx) {
    case W_GAME:
        window_game(data);
        break;
    case W_JESUS:
        window_win(data);
        break;
    case W_HOLYBAT:
        window_HolyBat(data);
        break;
    case W_LORE:
        window_lore(data);
        break;
    case W_LOOSE:
        window_loose();
        break;
    default:
        break;
    }
}
