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

int Holybat_display(int x, int y, int decal)
{
    clear();
    char str1[] = "    (_    ,_,    _) ";
    char str2[] = "   / `'--) (--'` \\  ";
    char str3[] = "  /  _,-'\\_/'-,_  \\ ";
    char str4[] = " /.-'     '     '-.\\";
    for (int i = 0; str1[i]; i++) mvaddch(25 + y + decal, x + i + 10, str1[i]);
    for (int i = 0; str2[i]; i++) mvaddch(26 + y + decal, x + i + 10, str2[i]);
    for (int i = 0; str3[i]; i++) mvaddch(27 + y + decal, x + i + 10, str3[i]);
    for (int i = 0; str4[i]; i++) mvaddch(28 + y + decal, x + i + 10, str4[i]);
    mvprintw(0 + y - 20, x - 50, "                          ^B#Y:");
    mvprintw(1 + y - 20, x - 50, "                        .5&##&#5:");
    mvprintw(2 + y - 20, x - 50, "                       7#&#####&&P^");
    mvprintw(3 + y - 20, x - 50, "                     .G&###########5:");
    mvprintw(4 + y - 20, x - 50, "                    !#&####B#########5.");
    mvprintw(5 + y - 20, x - 50, "                   ~&####GY.5G#######&#?");
    mvprintw(6 + y - 20, x - 50, "                  .######5J 7P########&&G:");
    mvprintw(7 + y - 20, x - 50, "                 .B######&&~5&######BGP#&#?");
    mvprintw(8 + y - 20, x - 50, "                 G&&BGGBBBBGGGGPP5YJJ^:#@&&5");
    mvprintw(9 + y - 20, x - 50, "                5&#@G^~YPPY?JJY55YJJJ^:B@##&G.");
    mvprintw(10 + y - 20, x - 50, "               J&##&#^^JYYJJJJJJJJJJ?^:G&###&#~");
    mvprintw(11 + y - 20, x - 50, "              7&####&!^?JJJJJJJJJJJJ?^^#&#####&J");
    mvprintw(12 + y - 20, x - 50, "             ~&####&@G:!J?7!~~~!!7J?~:!@@&&###BPP.");
    mvprintw(13 + y - 20, x - 50, "            :#&#&&@@@@7^~^^^~~~^^^^^^:B@@@@&YY?7YJ~");
    mvprintw(14 + y - 20, x - 50, "           .B&@@@@@@@@&!:          ::Y@@#@@@Y7????JY");
    mvprintw(15 + y - 20, x - 50, "           P@@@@@@@@@@@&Y~::^::::::~G@@&B@@@B7????Y&B^");
    mvprintw(16 + y - 20, x - 50, "          J@@@@@@@@@@@##@&GJ7!~!7YB@@@&P@@@@&????75@@&P:");
    mvprintw(17 + y - 20, x - 50, "         ~@@@@@@@@@@@BB@@@@@@@@@@@@@@B5@@@@@@Y???7P@@@@@Y");
    mvprintw(18 + y - 20, x - 50, "         &@@@@@@@@@@BP@@@@@@@@@@@@@@G5@@@@@@@G???7G@@@@@@7");
    mvprintw(19 + y - 20, x - 50, "        .@@@@@@@@@@@J&@@@@@@@@@@@@@55@@@@@@@@#???7B@@@@@@@^");
    mvprintw(20 + y - 20, x - 50, "        Y@@@@@@@@@@#Y@@@@@@@@@@@@&YP@@@@@@@@@&?7?7B@@@@@@@@~");
    mvprintw(21 + y - 20, x - 50, "       7@@@@@@@@@@@#Y@@@@@@@@@@@&JG@@@@@@@@@@@&#GG&@@@@@@@@@5");
    mvprintw(22 + y - 20, x - 50, "      :@@@@@@@@@@@@#J@@@@@@@@@@#?#@@@@@@@@@@@B#BGG#@@@@@@@@@@#:");
    mvprintw(23 + y - 20, x - 50, "      #@@@@@@@@@@@@&J@@@@@@@@@BJ&@@@@@@@@@@@J!!!!!!7?5&@@@@@@@@?");
    mvprintw(24 + y - 20, x - 50, "     Y@@@@@@@@@@@@@&Y@@@@@@@@PY@@@@@@@@@@@@#!!!!!!!!!!7&@@@@@@@@G");
    mvprintw(25 + y - 20, x - 50, "    :@@@@@@@@@@@@@@@5@@@@@@@5P@@@@@@@@@@@@@#!!!!!!!!!!!J@@@@@@@@@&.");
    mvprintw(26 + y - 20, x - 50, "    B@@@@@@@@@@@@@@@G@@@@@&YB@@@@@@@@@@@@@@@?!!!!!!!!!!!&@@@@@@@@@&:");
    mvprintw(27 + y - 20, x - 50, "   ~@@@@@@@@@@@@@@@@B@@@@#5&@@@@@@@@@@@@@@@@&G5J7!!!!!!J&@@@@@@@@@@&.");
    mvprintw(28 + y - 20, x - 50, "   #@@@@@@@@@@@@@@@@#&@@B5@@@@@@@@@@@@@@@@@@@@@@BGG5^YB@@@@@@@@@@@@@G");
    mvprintw(29 + y - 20, x - 50, "  !@@@@@@@@@@@@@@@@@#&@BB@@@@@@@@@@@@@@@@@@@@@@@####&@@@@@@@@@@@@@@@&");
    mvprintw(30 + y - 20, x - 50, "  #@@@@@@@@@@@@@@@@@&   @@@@@@@@@@@@@@@@@@@@@@@@#B#G&@@@@@@@@@@@@@@@#");
    mvprintw(31 + y - 20, x - 50, " ^@@@@@@@@@@@@@@@@&@@   @@@@@@@@@@@@@@@@@@@@@@@@#B#P:&@@@@@@@@@@@@@@^");
    mvprintw(32 + y - 20, x - 50, " 5@@@@@@@@@@@@@@@@         @@@@@@@@@@@@@@@@@@@@@#B#G :&@@@@@@@@@@@@~");
    mvprintw(33 + y - 20, x - 50, " &@@@@@@@@@@@@@@@@         @@@@@@@@@@@@@@@@@@@@@&B#B  :#@@@@@@@@@#:");
    mvprintw(34 + y - 20, x - 50, "^@@@@@@@@@@@@@@@@@@@@   @@@@@@@@@@@@@@@@@@@@@@@@&B##.  .G@@@@@@&?");
    mvprintw(35 + y - 20, x - 50, "J@@@@@@@@@@@@@@@@@@@&   @@@@@@@@@@@@@@@@@@@@@@@@&B##:    !&@@#7");
    mvprintw(36 + y - 20, x - 50, "G@@@@@@@@@@@@@@@@@@@&   @@@@@@@@@@@@@@@@@@@@@@@@&B##^      :.");
    mvprintw(37 + y - 20, x - 50, "#@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@&B##!");
    mvprintw(0 + y - 20, x, " _    _  ____  _  __     ______       _______ ");
    mvprintw(1 + y - 20, x, "| |  | |/ __ \\| | \\ \\   / /  _ \\   /\\|__   __|");
    mvprintw(2 + y - 20, x, "| |__| | |  | | |  \\ \\_/ /| |_) | /  \\  | |   ");
    mvprintw(3 + y - 20, x, "|  __  | |  | | |   \\   / |  _ < / /\\ \\ | |   ");
    mvprintw(4 + y - 20, x, "| |  | | |__| | |____| |  | |_) / ____ \\| |   ");
    mvprintw(5 + y - 20, x, "|_|  |_|\\____/|______|_|  |____/_/    \\_\\_|   ");
    return getch();
}

int Jesus_display(int x, int y, int decal)
{
    clear();
    mvprintw(0 + y - 20, x - 40, "                 @@@@@@@@@@@@@@@@               ");
    mvprintw(1 + y - 20, x - 40, "             @@@@@@@@@@@@@@@@@@@@@@@            ");
    mvprintw(2 + y - 20, x - 40, "           @@@@@@@@           @@@@@@@@          ");
    mvprintw(3 + y - 20, x - 40, "         @@@@@@@@               @@@@@@@         ");
    mvprintw(4 + y - 20, x - 40, "        @@@@@@@@                 @@@@@@@        ");
    mvprintw(5 + y - 20, x - 40, "       @@@@@@@@@                  @@@@@@@       ");
    mvprintw(6 + y - 20, x - 40, "       @@@@@@@                    @@@@@@@       ");
    mvprintw(7 + y - 20, x - 40, "       @@@@@@@   /@@@#    @@@@@   @@@@@@@@      ");
    mvprintw(8 + y - 20, x - 40, "     @@@@@@@@  @                   /@@@@@@@     ");
    mvprintw(9 + y - 20, x - 40, "    @@@@@@@@                        @@@@@@@     ");
    mvprintw(10 + y - 20, x - 40, "    @@@@@@@@@        &&            @@@@@@@@     ");
    mvprintw(11 + y - 20, x - 40, "    @@@@@@@@@                      @@@@@@@@/    ");
    mvprintw(12 + y - 20, x - 40, "    @@@@@@@@@@@     @@  @        @@@@@@@@@@@    ");
    mvprintw(13 + y - 20, x - 40, "   @@@@@@@@@@@@ @@@@@@@@@@#@@@@ @@@@@@@@@@@@@   ");
    mvprintw(14 + y - 20, x - 40, "   @@@@@@@@@@@@@@             #@@@@@@@@@@@@@@@  ");
    mvprintw(15 + y - 20, x - 40, "  @@@@@@@@@@@@@@@@            @@@@@@@@@@@@@@@@  ");
    mvprintw(16 + y - 20, x - 40, " @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@  ");
    mvprintw(17 + y - 20, x - 40, " #@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@ @@@@@@@@@@@@@ ");
    mvprintw(18 + y - 20, x - 40, " @@@@@@@@@@@@@@@  @@@@@@@@@@@@@/   @@@@@@@@@@@  ");
    mvprintw(19 + y - 20, x - 40, "@@@@@@@@@@@@@@@@                     @@@@@@@@@  ");
    mvprintw(20 + y - 20, x - 40, "@@@@@@@@@@@@@@@                    @@@@@@@@     ");
    mvprintw(21 + y - 20, x - 40, "  @@@@@@@@@@@@@@                     @          ");
    mvprintw(22 + y - 20, x - 40, "   /@@@  @@@@(                                  ");
    mvprintw(3 + y - 20, x + 20, "         ______");
    mvprintw(4 + y - 20, x + 20, "        |  =  |\\");
    mvprintw(5 + y - 20, x + 20, "        |  =  | \\");
    mvprintw(6 + y - 20, x + 20, "        |  =  |  |");
    mvprintw(7 + y - 20, x + 20, " _______|  =  |__|_____");
    mvprintw(8 + y - 20, x + 20, "|          =          |\\");
    mvprintw(9 + y - 20, x + 20, "| =================== | \\");
    mvprintw(10 + y - 20, x + 20, "|_______   =   _______|  |");
    mvprintw(11 + y - 20, x + 20, " \\      |  =  |\\       \\ |");
    mvprintw(12 + y - 20, x + 20, "  \\_____|  =  | \\_______\\|");
    mvprintw(13 + y - 20, x + 20, "        |  =  |  |");
    mvprintw(14 + y - 20, x + 20, "        |  =  |  |");
    mvprintw(15 + y - 20, x + 20, "        |  =  |  |");
    mvprintw(16 + y - 20, x + 20, "        |  =  |  |");
    mvprintw(17 + y - 20, x + 20, "        |  =  |  |");
    mvprintw(18 + y - 20, x + 20, "        |  =  |  |");
    mvprintw(19 + y - 20, x + 20, "        |_____|  |");
    mvprintw(20 + y - 20, x + 20, "        \\      \\ |");
    mvprintw(21 + y - 20, x + 20, "         \\______\\|");
    char str1[] = "_________ _______  _______           _______    _______           _______ _________ _______ _________";
    char str2[] = "\\__    _/(  ____ \\(  ____ \\|\\     /|(  ____ \\  (  ____ \\|\\     /|(  ____ )\\__   __/(  ____ \\\\__   __/";
    char str3[] = "   )  (  | (    \\/| (    \\/| )   ( || (    \\/  | (    \\/| )   ( || (    )|   ) (   | (    \\/   ) (   ";
    char str4[] = "   |  |  | (__    | (_____ | |   | || (_____   | |      | (___) || (____)|   | |   | (_____    | |   ";
    char str5[] = "   |  |  |  __)   (_____  )| |   | |(_____  )  | |      |  ___  ||     __)   | |   (_____  )   | |   ";
    char str6[] = "   |  |  | (            ) || |   | |      ) |  | |      | (   ) || (\\ (      | |         ) |   | |   ";
    char str7[] = "|\\_)  )  | (____/\\/\\____) || (___) |/\\____) |  | (____/\\| )   ( || ) \\ \\_____) (___/\\____) |   | |   ";
    char str8[] = "(____/   (_______/\\_______)(_______)\\_______)  (_______/|/     \\||/   \\__/\\_______/\\_______)   )_(   ";
    for (int i = 0; str1[i]; i++) mvaddch(25 + y - 20, x - 40 + decal + i, str1[i]);
    for (int i = 0; str2[i]; i++) mvaddch(26 + y - 20, x - 40 + decal + i, str2[i]);
    for (int i = 0; str3[i]; i++) mvaddch(27 + y - 20, x - 40 + decal + i, str3[i]);
    for (int i = 0; str4[i]; i++) mvaddch(28 + y - 20, x - 40 + decal + i, str4[i]);
    for (int i = 0; str5[i]; i++) mvaddch(29 + y - 20, x - 40 + decal + i, str5[i]);
    for (int i = 0; str6[i]; i++) mvaddch(30 + y - 20, x - 40 + decal + i, str6[i]);
    for (int i = 0; str7[i]; i++) mvaddch(31 + y - 20, x - 40 + decal + i, str7[i]);
    for (int i = 0; str8[i]; i++) mvaddch(32 + y - 20, x - 40 + decal + i, str8[i]);
    return getch();
}

int checkInput (void)
{
    int input = getch();
    // if (input == ERR)
    //     return 0;
    if (input == ' ') {
        return 1;
    }
    if (input == 'q') {
        return 0;
    }
    return 1;
}

void print_map (char **map, int decal)
{
    if (my_strlen(map[0]) < decal)
        return;
    for (int i = 0; map[i]; i++)
        for (int j = 0; j < COLS && map[i][j + decal]; j++)
            mvprintw(i, j, "%c", map[i][j + decal]);
}

int main (int ac, char **av)
{

    initscr();              // Initialise la structure WINDOW et autres paramètres 
    char **map = filepath_to_arr(av[1]);
    // for (int i = 0; map[i]; i++)
        // my_printf("%s\n", map[i]);

    int beginInput = '\0';
    while (beginInput != 'a' && beginInput != ' ')
        beginInput = window_start(COLS / 2, LINES / 2);
    clear();
    beginInput = '\0';
    nodelay(stdscr, TRUE);
    int decal = 10;
    while (beginInput != 'a' && beginInput != ' ') {
        clear();
        beginInput = Holybat_display(COLS / 2, LINES / 2, decal);
        decal--;
        if (decal < -80) decal = 10;
        usleep(100000);
    }
    beginInput = '\0';
    decal = 150;
    while (beginInput != 'a' && beginInput != ' ') {
        clear();
        beginInput = Jesus_display(COLS / 2, LINES / 2, decal);
        decal--;
        if (decal < -200) decal = 150;
        usleep(100000);
    }
    clear();
    int input;
    decal = 0;
    while ((input = checkInput())) {
        clear();
        // refresh();
        print_map(map, decal++);
        // for (int i = 0; i < 10; i++)
        //     mvprintw(i, 0, "|");
        usleep(100000);
    }
    endwin();
    free_my_arr(map);
    return 0;
}