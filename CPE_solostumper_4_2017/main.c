/*
** EPITECH PROJECT, 2018
** stumper
** File description:
** stumper
*/

#include <unistd.h>
#include "my.h"

int main(int ac, char **av)
{
	int val = 0;
	int word = 0;
	int j = 0;
	int i = 0;
	char *str;

	if (ac != 2) {
		write(2, "ERROR\n", 6);
		return 84;
	}
	str = av[1];
	while (str[i] != 0) {
		if (str[i] == '-')
			word++;
		if (str[i] == ' ')
			j++;
		i++;
	}
	if (word > 1 || j == 0 || str[0] == 0) {
		write(2, "ERROR\n", 6);
		return 84;
	}
	word = 0;
	i = 0;
	j = 0;
	while (str[i] != 0) {
		if (str[i] == ' ') {
			i++;
			word = 1;
			my_putchar(' ');
			j = 1000000;
		}
		if (word == 1 && str[i] > 'Z')
			str[i] = str[i] - 32;
		if (str[i] > 'Z' && i == 0)
			str[i] = str[i] - 32;
		if (str[i+1] > 'Z' && str[i] == '-' && val  == 0) {
			str[i+1] = str[i+1] - 32;
			j = 2;
			val = 1;
		}
		if (str[i+1] < 'a' && str[i] == '-')
			j = 2;
		if (str[i] < 'a' && i != 0 && j <= 0)
			str[i] = str[i] + 32;
		j--;
		my_putchar(str[i]);
		i++;
	}
	my_putchar('\n');
	return 0;
}
