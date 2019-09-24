/*
** EPITECH PROJECT, 2018
** build_tab.c
** File description:
** building the tab
*/

#include "my.h"

void first_and_last_line(stct_t *all)
{
	for (int i = 0; i != all->width + 2; i++)
		printf("+");
	printf("\n");
}

void print_tab(stct_t *all)
{
	first_and_last_line(all);
	for (int i = 0; i != all->height; i++) {
		printf("|");
		for (int j = 0; j < all->width; j++)
			putchar(all->tab[i][j]);
		printf("|\n");
	}
	first_and_last_line(all);
}

void build_tab(stct_t *all)
{
	all->tab = malloc(sizeof(char *) * all->height);
	int j = 0;
	int i;

	for (i = 0; i != all->height; i++) {
		all->tab[i] = malloc(sizeof(char) * all->width);
		while (j != all->width) {
			all->tab[i][j] = '.';
			j++;
		}
		j = 0;
	}
	print_tab(all);
}
