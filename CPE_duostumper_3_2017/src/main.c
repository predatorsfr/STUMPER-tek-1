/*
** EPITECH PROJECT, 2018
** Cesar
** File description:
** main file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

#include "decrypt.h"
#include "utils.h"

bool decrypt(char **av)
{
	char *text[20];
	FILE *fd = fopen(av[1], "r");

	if (!fd)
		return (false);
	open_read(fd, text);
	printf("%s", cesar(text, atoi(av[2])));
	return (true);
}

bool parameters(int ac, char **av)
{
	if (av[1][0] == '-' && strcmp(av[1], "-f") && strcmp(av[1], "-s"))
		return false;
	if (av[1][0] != '-') {
		if (ac != 3)
			return false;
		if (is_number(av[2]) || !decrypt(av))
			return (false);
	}
	if (ac != 4 || av[1][0] != '-' || is_number(av[3]))
		return false;
	if (!strcmp(av[1], "-f"))
		if (!encrypt_file(av))
			return false;
	if (!strcmp(av[1], "-s"))
		if (!encrypt_string(av))
			return false;
	return (true);
}

int main(int ac, char **av)
{

	if (ac != 3 && ac != 4)
		return (84);
	if (!parameters(ac, av))
		return (84);
	return (0);
}
