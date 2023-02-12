/*
** EPITECH PROJECT, 2022
** my_putstrstr.c
** File description:
** affiché un double char etoile
*/
#include "jam.h"
#include <stddef.h>
void my_putstrstr(char **src)
{
	int m = 0;
	while (src[m] != NULL){
		my_putstr(src[m]);
		m = m + 1;
	}
}
