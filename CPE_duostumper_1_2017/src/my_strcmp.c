/*
** EPITECH PROJECT, 2017
** my_strcmp.c
** File description:
** compare string in this weird order
*/

#include "../include/my.h"

int my_strcmp(char const *s1, char const *s2)
{
	int i = 0;

	while (s1[i] != '\0' || s2[i] != '\0') {
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}
