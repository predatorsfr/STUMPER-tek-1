/*
** EPITECH PROJECT, 2017
** my_strcat.c
** File description:
** cat
*/

#include "../include/my.h"
#include <stdlib.h>

char *my_strcat(char *dest, char const *src)
{
	char *final = malloc(sizeof(char) *
				(my_strlen(dest) + my_strlen(src) + 1));
	int i = 0;
	int ii = 0;

	if (final == NULL)
		return (NULL);
	while (dest[i] != '\0') {
		final[i] = dest[i];
		i++;
	}
	while (src[ii] != '\0') {
		final[i] = src[ii];
		i++;
		ii++;
	}
	final[i] = '\0';
	return (final);
}
