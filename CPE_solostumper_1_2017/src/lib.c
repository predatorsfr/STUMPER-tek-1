/*
** EPITECH PROJECT, 2018
** lib
** File description:
** lib
*/

#include <unistd.h>
#include "../my.h"

void	my_putchar(char c)
{
	write(1, &c, 1);
}

int my_strlen(char const *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return i;
}

int	my_putstr(char const *str)
{
	if (str == NULL) {
		write(1, "(null)", 6);
		return 0;
	}
	write(1, str, my_strlen(str));
	return 0;
}
