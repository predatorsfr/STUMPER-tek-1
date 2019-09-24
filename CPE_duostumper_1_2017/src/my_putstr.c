/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
** print string
*/

#include "../include/my.h"

int my_putstr(char const *str)
{
	while (*str != '\0')
		my_putchar(*str++);
	return (0);
}
