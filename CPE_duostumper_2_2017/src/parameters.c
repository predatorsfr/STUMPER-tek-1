/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** error
*/

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#include "my.h"
#include "utils.h"

static bool print_error(char *arg)
{
	fprintf(stderr, "bad parameter for %s\n", arg);
	return false;
}

static bool char_param(char *type, char *data, stct_t *all)
{
	if (!strcmp(type, "-p1")) {
		if (strlen(data) == 1)
			all->player1 = data[0];
		else
			return print_error(type);
	}
	if (!strcmp(type, "-p2")) {
		if (strlen(data) == 1)
			all->player2 = data[0];
		else
			return print_error(type);
	}
	if (!strcmp(type, "-a")) {
		if (strlen(data) == 1)
			all->win = data[0];
		else
			return print_error(type);
	}
	return true;
}

static bool check_parameters(char *type, char *data, stct_t *all)
{
	if (!strcmp(type, "-w")) {
		if (!is_number(data))
			all->width = atoi(data);
		else
			return print_error(type);
	}
	if (!strcmp(type, "-h")) {
		if (!is_number(data))
			all->height = atoi(data);
		else
			return print_error(type);
	}
	if ((all->height < 1 || all->height > 16)
		|| all->width < 1 || all->width > 80) {
		fprintf(stderr, "width must me between 1 and 80\n");
		fprintf(stderr, "height must be between 1 and 16\n");
		return false;
	}
	if (!char_param(type, data, all))
		return false;
	return true;
}

bool parameters(int ac, char **av, stct_t *all)
{
	if (ac % 2 == 0) {
		fprintf(stderr, "missing parameter\n");
		return false;
	}
	for (int i = 1; i < ac; i += 2) {
		if (!check_parameters(av[i], av[i + 1], all))
			return false;
	}
	if (all->player1 == all->player2) {
		fprintf(stderr, "p1 is the same as p2\n");
		return false;
	} else if (all->player1 == all->win || all->player2 == all->win) {
		fprintf(stderr,
			"a player char is the same as the victory char\n");
		return false;
	}
	if (all->width * all->height < 20) {
		fprintf(stderr, "map size must be >= 20\n");
		return false;
	}
	return true;
}
