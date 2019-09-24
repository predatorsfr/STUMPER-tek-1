/*
** EPITECH PROJECT, 2017
** my_strdup.c
** File description:
** cpy string into another
*/

#include "../include/my.h"
#include <stdlib.h>

char *my_strdup(char const *src)
{
	char *str;

	str = malloc(sizeof(char) * (my_strlen(src) + 1));
	if (str == NULL)
		return (NULL);
	return (my_strcpy(str, src));
}
