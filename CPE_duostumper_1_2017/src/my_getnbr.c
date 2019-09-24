/*
** EPITECH PROJECT, 2017
** my_getnbr.c
** File description:
** take nb from string and display it
*/

#include "../include/my.h"

int my_getnbr(char const *str)
{
	int sign = 1;
	int nb = 0;

	while (*str == '-') {
		str++;
		sign *= -1;
	}
	while (*str <= '9' && *str > '0') {
		nb = nb * 10 + (*str - '0');
		str++;
	}
	return (sign * nb);
}
