/*
** EPITECH PROJECT, 2023
** jam superhero
** File description:
** jam superhero
*/

#include "../include/my.h"

void Bat_art(int x, int y, int decal)
{
    char str1[] = "    (_    ,_,    _) ";
    char str2[] = "   / `'--) (--'` \\  ";
    char str3[] = "  /  _,-'\\_/'-,_  \\ ";
    char str4[] = " /.-'     '     '-.\\";
    for (int i = 0; str1[i]; i++) mvaddch(1 + y - 13, decal + x + i - 110, str1[i]);
    for (int i = 0; str2[i]; i++) mvaddch(2 + y - 13, decal + x + i - 110, str2[i]);
    for (int i = 0; str3[i]; i++) mvaddch(3 + y - 13, decal + x + i - 110, str3[i]);
    for (int i = 0; str4[i]; i++) mvaddch(4 + y - 13, decal + x + i - 110, str4[i]);
}

void citation_art(int x, int y, int *decal, int *go_right, int cit_index)
{
    char *citation[] = {
        " Do not grieve, for the joy of the Lord is your strength.",
        " For nothing will be impossible with God.",
        " Let all that you do be done in love.",
        " Hatred stirs up strife, But love covers all sins.",
        " Jesus Wept.",
        " For whoever calls on the name of the Lord shall be saved."
    };

    if (*go_right == 0) {   
        mvprintw(0 + y - *decal - 5, x - 50, "%s", citation[cit_index]);
        mvprintw(1 + y - *decal - 5, x - 50, "                                                         ");
    }
    if (*go_right == 1) {
        mvprintw(0 + y - 10, x - 50 + *decal, "%s", citation[cit_index]);
    }
    if (*go_right == 0 && *decal > 4) {
        *go_right = 1;
        *decal = 0;
        usleep(1000000);
    }
    if (*go_right == 1 && *decal > 50) {
        *go_right = 2;
    }
    (*decal)++;
    if (*go_right == 1) {
        usleep(2000);
    } else {
        usleep(200000);
    }
}

void jesus_kiss(int x, int y, int decal)
{
   mvprintw(0 + y - 30 + decal, x - 40, "         ");
   mvprintw(1 + y - 30 + decal, x - 40, "   .-.   ");
   mvprintw(2 + y - 30 + decal, x - 40, " __| |__ ");
   mvprintw(3 + y - 30 + decal, x - 40, "[__   __]");
   mvprintw(4 + y - 30 + decal, x - 40, "   | |   ");
   mvprintw(5 + y - 30 + decal, x - 40, "   | |   ");
   mvprintw(6 + y - 30 + decal, x - 40, "   | |   ");
   mvprintw(7 + y - 30 + decal, x - 40, "   '-'   ");
}

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
    mvprintw(1 + y - 16, x, "  .:~?YPPGGBBBPJ^.    .^JPBBBGGP5Y?~:.");
    mvprintw(2 + y - 16, x, ".!5G##GGGBB#&&&@&.    .&@&&&#BBGGG##G5!.");
    mvprintw(3 + y - 16, x, "    ^&&&&&&&#GB&! .!~. !&BG#&&&&&&&^");
    mvprintw(4 + y - 16, x, "    ..^&@#BB##&@~^#&&7 ~@&##BB#@&^..");
    mvprintw(5 + y - 16, x, "      :J.  .?@@&B#&@&Y5G&@@?.  .J:");
    mvprintw(6 + y - 16, x, "            ~#P#&&&&&&&&&5#~");
    mvprintw(7 + y - 16, x, "              5#~5@@@@7^&G");
    mvprintw(8 + y - 16, x, "             .BY G&@@@? ^@^");
    mvprintw(9 + y - 16, x, "              BG:&@@@@&..#^");
    mvprintw(10 + y - 16, x, "                 &@&&&&:");
}

void pentagram_rpg_art(int x, int y)
{
    mvprintw(1 + y - 16, x, "           :!5G##########G5!:");
    mvprintw(2 + y - 16, x, "        :5BBY!:.        .:!YPP?:");
    mvprintw(3 + y - 16, x, "     .5&?!~                  ^~?&5.");
    mvprintw(4 + y - 16, x, "    5@5.  &#?.            .?#&. .5@5");
    mvprintw(5 + y - 16, x, "  :&&.    ^@PPB?.      .?BPP@~    .#@:");
    mvprintw(6 + y - 16, x, " ^@G       5& .7GG7. !GG7. &P       P@^");
    mvprintw(7 + y - 16, x, ".@B         &P   ^BBBB~   P&         B@.");
    mvprintw(8 + y - 16, x, "G@.         :&^!GG! .7GG^^@:         .@G");
    mvprintw(9 + y - 16, x, "@#         .!B#J.      .~@P~.         #@");
    mvprintw(10 + y - 16, x, "@P      .!PGJ.GP        G& ?GP!.      P@");
    mvprintw(11 + y - 16, x, "@&    ~PGJ.   .@!      ~@.   .JGP~    &@");
    mvprintw(12 + y - 16, x, "J@..Y#@&5YY555JJ@^Y555YGG5555YY5&@#Y..@J");
    mvprintw(13 + y - 16, x, " PG.            B#   .B5            .#P");
    mvprintw(14 + y - 16, x, "  B&.           .@?  ?@.           .&&.");
    mvprintw(15 + y - 16, x, "   G@?           ~@..@!           7@G");
    mvprintw(16 + y - 16, x, "    ^#&7          G&&G          7&&^");
    mvprintw(17 + y - 16, x, "      ^G&G~.       &&       .~G&G^");
    mvprintw(18 + y - 16, x, "         ~5BBP?~:..~~..:~?PBB5~");
    mvprintw(19 + y - 16, x, "            75B&&@@##@@&&B57");
}

void brimstone_rpg_art(int x, int y)
{
    mvprintw(1 + y - 16, x, "             .!?}!.");
    mvprintw(2 + y - 16, x, "              ^@@~");
    mvprintw(3 + y - 16, x, "              :@@^");
    mvprintw(4 + y - 16, x, "        !&&&&&&@@&&&&&&!");
    mvprintw(5 + y - 16, x, "        :!^^^^?@@J^^^^!:");
    mvprintw(6 + y - 16, x, "      J.......~@@7.......7^");
    mvprintw(7 + y - 16, x, "      @@&&&&&&@@@@&&&&&&&@~");
    mvprintw(8 + y - 16, x, "      !       ^@@~       ^:");
    mvprintw(9 + y - 16, x, "    :~~~^.    :@@^    ..:::.");
    mvprintw(10 + y - 16, x, " :B@@@&@@@@#5::@@^ ?B&@&###&&B~");
    mvprintw(11 + y - 16, x, "!@&!.    .:7P&&@@#@&5^.     ^#@Y");
    mvprintw(12 + y - 16, x, "&@^           #@@@!           @@");
    mvprintw(13 + y - 16, x, "G@B.       :Y&@P?##?:       .P@&");
    mvprintw(14 + y - 16, x, " ?&@#GPGB&@@&J.   ~G&&&BBGB&@@G.");
    mvprintw(15 + y - 16, x, "   *~?YYY?~*         *~777!^*");
}

void satan_rpg_art(int x, int y)
{
    mvprintw(1 + y - 16, x, "                           ."    );
    mvprintw(2 + y - 16, x, "                    .::...:^.");
    mvprintw(3 + y - 16, x, "         :YGY^ ..  J@@@@#7.");
    mvprintw(4 + y - 16, x, "        #@@@@@PJ#7J@@@@@@.  !:    ::.");
    mvprintw(5 + y - 16, x, "   .~   B@@@@@@@@@@@@@@@7   !#    .^J?:");
    mvprintw(6 + y - 16, x, "    PY.  Y&@@@@@@&B&@@@! .:J#:      .Y5~");
    mvprintw(7 + y - 16, x, "    .B&BYJ!Y@@&&@@&@@@@&&@#J.       .~5Y");
    mvprintw(8 + y - 16, x, "      .7G@@@&P&@@@@@Y.^J!:     .:^^.~7J5");
    mvprintw(9 + y - 16, x, "       .!Y?!. :@@@@@B:   ..    .~77#BJ?Y");
    mvprintw(10 + y - 16, x, "     .7?J: ..^P@@@@@@@@&@@&5: 7: P@##&G~");
    mvprintw(11 + y - 16, x, "     ?J7^^G&@@@@@@@@@@@@@@@@&!!@7^P@BB@?");
    mvprintw(12 + y - 16, x, "    .J?!G@@@@@&&#####BBG#@@@&@JB@Y7&@&P:");
    mvprintw(13 + y - 16, x, "    :JJ?B@@@@@@@&&&&&&&@BGBPY&#5&&###7");
    mvprintw(14 + y - 16, x, "     ^77B@@@@@@@@&&&&##BY^~5PB##B#&G.");
    mvprintw(15 + y - 16, x, "      ^?&@@@@@@&&&#G55J:   ^YB###&@@^");
    mvprintw(16 + y - 16, x, "   ~Y5GG&@@@@&&#GJ?J5P?!7!!:..7P#&&@!");
    mvprintw(17 + y - 16, x, " :BY:. !&@&#BP5J?YB&#5J555GGGJ  .7#@:");
    mvprintw(18 + y - 16, x, " ?&   .##G5YJ?Y5P#&@? ....^JJPB   GG");
    mvprintw(19 + y - 16, x, " 5@Y:JBPJYY7~!JP#&&@J     .7:~&: .~");
    mvprintw(20 + y - 16, x, "&@@@&G775J!!!YB#&&&@&:  .^~. !@:");
    mvprintw(21 + y - 16, x, "55P5!.!JY!^!5B#&&&@@@!      !&J");
    mvprintw(22 + y - 16, x, "     .:... .::^^~~~^^^..   .!^");
}

void player_tag(int x, int y, int hp, int mp, char *name)
{
    mvprintw(0 + y - 10, x - 50, "____________");
    mvprintw(1 + y - 10, x - 50, "            ");
    mvprintw(2 + y - 10, x - 50, "  %s", name);
    mvprintw(3 + y - 10, x - 50, "  HP = %d", hp);
    mvprintw(4 + y - 10, x - 50, "  MP = %d", mp);
    mvprintw(5 + y - 10, x - 50, "____________");
}

void ennemi_tag(int x, int y, int hp, char *name)
{
    mvprintw(0 + y - 21, x, "____________");
    mvprintw(1 + y - 21, x, "            ");
    mvprintw(2 + y - 21, x, "  %s", name);
    mvprintw(3 + y - 21, x, "  HP = %d", hp);
    mvprintw(4 + y - 21, x, "____________");
}

void show_attack_option(int x, int y, int option)
{
    mvprintw(1 + y + 7, x + 5, "Bat Attack");
    mvprintw(3 + y + 7, x + 5, "Holy Citation");
    mvprintw(5 + y + 7, x + 5, "Jesus's kiss");
    mvprintw(7 + y + 7, x + 5, "Holy Prayer");
    mvprintw(-1 + y + (option * 2) + 7, x, "-->");
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
