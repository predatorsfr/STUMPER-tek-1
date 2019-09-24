/*
** EPITECH PROJECT, 2017
** my_revstr.c
** File description:
** reverse string
*/

#include "../include/my.h"

char *my_revstr(char *str)
{
	int i = 0;
	int j = my_strlen(str) - 1;
	char tmp;

	while (i < j) {
		tmp = str[j];
		str[j] = str[i];
		str[i] = tmp;
		i++;
		j--;
	}
	return (str);
}
