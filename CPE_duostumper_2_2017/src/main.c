/*
** EPITECH PROJECT, 2018
** PROJECT NAME
** File description:
** FILE DESCRITION
*/

#include "parameters.h"
#include "my.h"

static void print_all_struct(stct_t *all)
{
	printf("width: %d\nheight: %d\n", all->width, all->height);
	printf("player1: %c\nplayer2: %c\n", all->player1, all->player2);
	printf("win: %c\n", all->win);
}

int main(int ac, char **av)
{
	stct_t all = (stct_t) {NULL, 7, 6, 'X', 'O', '#'};

	if (!parameters(ac, av, &all))
		return EXIT_ERROR;
	print_all_struct(&all);
	build_tab(&all);
	if (!game(&all))
		return EXIT_ERROR;
	check_win(&all);
	for (int i = 0; i < all.height; i++)
		free(all.tab[i]);
	free(all.tab);
	return EXIT_SUCCESS;
}
