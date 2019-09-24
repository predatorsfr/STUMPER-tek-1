/*
** EPITECH PROJECT, 2018
** cesar
** File description:
** encrypt
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#include "decrypt.h"

bool encrypt_file(char **av)
{
	char *text[256];
	FILE *fd = fopen(av[2], "r");

	if (!fd)
		return (false);
	open_write(fd, text, av);
	return (true);
}

bool encrypt_string(char **av)
{
	char *result;

	if (av[2][strlen(av[2]) - 1] != '\n') {
		result = malloc(sizeof(char) * strlen(av[2]) + 2);
		if (!result)
			return (false);
		strcpy(result, av[2]);
		result[strlen(av[2])] = '\n';
		result[strlen(av[2]) + 1] = '\0';
		write_string(cesar_str(result, atoi(av[3])));
		free(result);
	} else
		write_string(cesar_str(av[2], atoi(av[3])));
	return (true);
}
