/*
** EPITECH PROJECT, 2018
** main
** File description:
** raphael.dubois@epitech.eu
*/

#include <unistd.h>
#include "my.h"

int clean(char *av)
{
	int i = 0;
	int j = 0;
	while (av[i] != 0) {
		if (av[i + 3] == 0 && av[i + 2] == ' '
		    && av[i + 1] == 't' && av[i] == '\\')
			return 0;
		if (av[i + 2] == 0 && av[i + 1] == 't' && av[i] == '\\')
			return 0;
		if (av[i] == ' ' && av[i + 1] == 0)
			return 0;
		if (av[i] == ' ' && av[i + 1] > 0 && j == 0)
			i++;
		if (av[i] == '\\')
			i = i + 2;
		if (av[i] == '\\')
			i = i + 2;
		my_putchar(av[i]);
		i++;
		j = 1;
	}
	my_putchar('\n');
}
int main(int ac, char **av)
{
	if (ac < 2) {
		write(1, "\n", 1);
		return 0;
	}
	if (ac > 2) {
		write(2, "error", 5);
		return 84;
	}
	clean(av[1]);
	return 0;
}
