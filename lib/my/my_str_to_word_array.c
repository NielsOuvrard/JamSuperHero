/*
** EPITECH PROJECT, 2022
** my_str_to_word_array.c
** File description:
** split a string into words
*/

#include "my.h"

int alpha(char x)
{
    if (x == '#' || x == ' ' || x == 'P' || x == 'E')
        return (1);
    else
        return (0);
}

int nbm(char const *str)
{
    int lettre = 0, mot = 0;
    while (str[lettre] != '\0'){
        if (alpha(str[lettre]) == 1 && alpha(str[lettre + 1]) == 0){
            mot = mot + 1;
        }
        lettre = lettre + 1;
    }
    return (mot);
}

int nbl(char const *str, int m)
{
    int i = 0;
    while (str[m] != '\n'){
        m = m + 1;
        i += 1;
    }
    return (i);
}

char **my_str_to_word_array(char const *str)
{
    int nombre = nbm(str), m = 0, l1 = 0, l2 = 0;
    char **dest;
    dest = malloc(sizeof(char *) * nombre);
    while (str[l1] != '\0' && alpha(str[l1]) == 0){
        l1++;
    }
    while (m < nombre){
        dest[m] = malloc(sizeof(char) * (nbl(str, l1) + 1));
        while (str[l1] != '\0' && (alpha(str[l1]) == 1)){
            dest[m][l2] = str[l1];
            l2++, l1++;
        }
        while (str[l1] != '\0' && alpha(str[l1]) == 0) {
            l1++;
        }
        dest[m][l2] = '\n', dest[m][l2 + 1] = '\0';
        m++, l2 = 0;
    }
    dest[m] = NULL;
    return (dest);
}
