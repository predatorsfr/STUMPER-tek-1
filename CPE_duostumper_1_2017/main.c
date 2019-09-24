/*
** EPITECH PROJECT, 2017
** main.c
** File description:
** main
*/

#include "include/my.h"

void game_frac(int ac, char **av)
{
	char **str = malloc(sizeof(char **) * (ac + 1));
	int j = 0;
	int k = 0;
	
	str[k] = malloc(sizeof(char ) * (ac + 1));
	for (int i = 0; av[2][i] != '\0' ; i++) {
		if (av[2][i] == '@') {
			k++;
			str[k] = malloc(sizeof(char ) * (ac +1));
			i++;
			j = 0;
		}
		str[k][j] = av[2][i];
		j++;
	}
	str[k][j] = '\0';
	for ( int i = 0; str[i] != 0 ; i++) {
		my_putstr(str[i]);
		my_putchar('\n');
	}
}

void tab(int ac, char **av)
{
	if (av[1][0] == '1')
		game_frac(ac,av);
}

int error(int ac, char **av)
{
	int i = 0;
	
	if ( ac != 4 || av[1][0] < '0' || av[1][0] > '9') {
		write(2,"invalid arguments\n",18);
		return (84);
	}
	while (av[2][i] != '\0') {
		if (av[2][i] == '@' || av[2][i] == '#' || av[2][i] == '.')
			i++;
		else {
			write(2,"invalid string\n",15);
			return (84);
		}
	}
	i = 0;
	while (av[3][i] != '\0') {
		if (av[3][i] == '@' || av[3][i] == '#' || av[3][i] == '.')
			i++;
		else {
			write(2,"invalid string\n",15);
			return (84);
		}
	}
}
int main(int ac, char **av)
{
	if (error(ac,av) == 84)
		return (84);
	if (av[1][0] == '0')
		my_putstr("#\n");
	else
		tab(ac,av);
	return (0);
}
