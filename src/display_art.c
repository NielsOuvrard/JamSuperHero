/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"

int Holybat_art(int x, int y, int decal)
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

int Jesus_art(int x, int y, int decal)
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

void player_rpg_art(int x, int y)
{
    mvprintw(1 + y - 5, x - 50, "             .PB!");
    mvprintw(2 + y - 5, x - 50, "           ?#&&&B7");
    mvprintw(3 + y - 5, x - 50, "          G&#YG###B~");
    mvprintw(4 + y - 5, x - 50, "         5&&#75###B#P.");
    mvprintw(5 + y - 5, x - 50, "        J&5YGP5P5Y!J@B:");
    mvprintw(6 + y - 5, x - 50, "       7&&Y~YJ?JJJ~J&##7");
    mvprintw(7 + y - 5, x - 50, "      ~&&@&~!~~~~!^B@&G57");
    mvprintw(8 + y - 5, x - 50, "     :&@@@@#~    ^P@&@Y7?5~");
    mvprintw(9 + y - 5, x - 50, "     &@@@@&&@#GPB&@#@@B77#@G.");
    mvprintw(10 + y - 5, x - 50, "    J@@@@@B@@@@@@&B@@@&?7#@@#");
    mvprintw(11 + y - 5, x - 50, "   .&@@@@&#@@@@@#B@@@@@G5&@@@#.");
    mvprintw(12 + y - 5, x - 50, "   G@@@@@&B@@@@B#@@@@@G5YPB&@@&!");
    mvprintw(13 + y - 5, x - 50, "  7@@@@@@@#@@@B&@@@@@&!!!!~Y@@@@P");
    mvprintw(14 + y - 5, x - 50, " .&@@@@@@@&@@B&@@@@@@@P?7!!7&@@@@B");
    mvprintw(15 + y - 5, x - 50, " Y@@@@@@@@&&#@@@@@@@@@@@BGG&@@@@@@7");
    mvprintw(16 + y - 5, x - 50, " &@@@@@@@&  @@@@@@@@@@@@#GB@@@@@@@^");
    mvprintw(17 + y - 5, x - 50, "!@@@@@@@      @@@@@@@@@@#G.G@@@@&!");
    mvprintw(18 + y - 5, x - 50, "G@@@@@@@@@  @@@@@@@@@@@@#B  J&&5.");
    mvprintw(19 + y - 5, x - 50, "#@@@@@@@@@  @@@@@@@@@@@@&#.");
}

void demon_rpg_art(int x, int y)
{
    mvprintw(1 + y - 15, x, "  .:~?YPPGGBBBPJ^.    .^JPBBBGGP5Y?~:.");
    mvprintw(2 + y - 15, x, ".!5G##GGGBB#&&&@&.    .&@&&&#BBGGG##G5!.");
    mvprintw(3 + y - 15, x, "    ^&&&&&&&#GB&! .!~. !&BG#&&&&&&&^");
    mvprintw(4 + y - 15, x, "    ..^&@#BB##&@~^#&&7 ~@&##BB#@&^..");
    mvprintw(5 + y - 15, x, "      :J.  .?@@&B#&@&Y5G&@@?.  .J:");
    mvprintw(6 + y - 15, x, "            ~#P#&&&&&&&&&5#~");
    mvprintw(7 + y - 15, x, "              5#~5@@@@7^&G");
    mvprintw(8 + y - 15, x, "             .BY G&@@@? ^@^");
    mvprintw(9 + y - 15, x, "              BG:&@@@@&..#^");
    mvprintw(10 + y - 15, x, "                 &@&&&&:");
}

void player_tag(int x, int y, int hp, int mp, char *name)
{
    mvprintw(0 + y - 10, x - 50, "____________");
    mvprintw(1 + y - 10, x - 50, "  %s", name);
    mvprintw(2 + y - 10, x - 50, "  HP = %d", hp);
    mvprintw(3 + y - 10, x - 50, "  MP = %d", mp);
    mvprintw(4 + y - 10, x - 50, "____________");
}

void ennemi_tag(int x, int y, int hp, char *name)
{
    mvprintw(0 + y - 20, x, "____________");
    mvprintw(1 + y - 20, x, "  %s", name);
    mvprintw(2 + y - 20, x, "  HP = %d", hp);
    mvprintw(3 + y - 20, x, "____________");
}

void show_attack_option(int x, int y, int option)
{
    mvprintw(1 + y, x + 5, "Bat Attack");
    mvprintw(3 + y, x + 5, "Holy Citation");
    mvprintw(5 + y, x + 5, "Jesus's kiss");
    mvprintw(7 + y, x + 5, "Holy Prayer");
    mvprintw(-1 + y + (option * 2), x, "-->");
}

void display_jesus(void)
{
    int beginInput = '\0';
    int decal = 150;
    while (beginInput != 'a' && beginInput != ' ') {
        clear();
        beginInput = Jesus_art(COLS / 2, LINES / 2, decal);
        decal--;
        if (decal < -200) decal = 150;
        usleep(100000);
    }
    clear();
}

void display_holybat(void)
{
    int beginInput = '\0';
    int decal = 10;
    while (beginInput != 'a' && beginInput != ' ') {
        clear();
        beginInput = Holybat_art(COLS / 2, LINES / 2, decal);
        decal--;
        if (decal < -80) decal = 10;
        usleep(100000);
    }
    clear();
}
