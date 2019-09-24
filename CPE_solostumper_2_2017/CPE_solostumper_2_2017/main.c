/*
** EPITECH PROJECT, 2018
** main
** File description:
** raphael.dubois@epitech.eu
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"
char	*my_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i = i + 1;
	while (src[j] != '\0') {
		dest[i] = src[j];
		i = i + 1;
		j = j + 1;
	}
	dest[i] = '\0';
	return (dest);
}
int space(char *av, int i)
{
	if (av[i + 3] == 0 && av[i + 2] == ' '
	    && av[i + 1] == 't' && av[i] == '\\')
		return 0;
	if (av[i + 2] == 0 && av[i + 1] == 't' && av[i] == '\\')
		return 0;
	if (av[i] == '\\')
		i = i + 2;
	if (av[i] == '\\')
		i = i + 2;
	return i;
}
int clean(char *av)
{
	int i = 0;
	int j = 0;
	if (av[3] == 'a' && av[4] == 'b')
		i = 3;
	while (av[i] != 0) {
		while (av[i] == ' ' && av[i + 1] < 65) {
			if (av[i] == ' ' && av[i + 1] == 0) {
				my_putchar('\n');
				return 0;
			}
			i++;
		}
		space(av, i);
		my_putchar(av[i]);
		i++;
		j = 1;
	}
	my_putchar('\n');
}

int main(int ac, char **av)
{
	int i = 0;
	int j = 1;
	int k = 0;
	char *str = malloc(sizeof(char) * my_strlen(*av));
	char *temp = malloc(sizeof(char) * my_strlen(*av));
	char *test = malloc(sizeof(char) * my_strlen(*av));
	char *final = malloc(sizeof(char) * my_strlen(*av));

	if (ac < 2) {
		write(1, "\n", 1);
		return 0;
	}
	if (ac > 2) {
		write(2, "error", 5);
		return 84;
	}
	temp[0] = ' ';
	my_strcat(str, av[1]);
	while(str[i] != ' ') {
		temp[j] = str[i];
		i++;
		j++;
	}
	temp[j] = '\0';
	my_strcat(str, temp);
	i = 0;
	j = 1;
	while(str[i] != 0) {
		while (str[i] == temp[j]) {
			i++;
			j++;
			}
		test[k] = str[i];
		i++;
		k++;
	}
	test[k] = '\0';
	i = 0;
	j = 1;
	while(test[j] != 0) {
		final[i] = test[j];
		i++;
		j++;
	}
	final[i] = '\0';
	clean(final);
	return 0;
}
