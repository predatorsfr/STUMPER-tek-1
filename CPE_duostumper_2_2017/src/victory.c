/*
** EPITECH PROJECT, 2018
** connect4
** File description:
** victory
*/

#include <stdbool.h>

#include "my.h"

static int add_count(int nb, char c, char player)
{
	if (nb == 4)
		return 4;
	if (c == player)
		return nb + 1;
	return 0;
}

static bool check_line_vertical(stct_t *all)
{
	int p1 = 0;
	int p2 = 0;

	for (int j = 0; j < all->width; j++)
		for (int i = 0; i < all->height - 1; i++) {
			p1 = add_count(p1, all->tab[i + 1][j], all->player1);
			p2 = add_count(p2, all->tab[i + 1][j], all->player2);
		}
	if (p1 == 4) {
		printf("Congrats, player %c won!\n", all->player1);
		return true;
	} else if (p2 == 4) {
		printf("Congrats, player %c won!\n", all->player2);
		return true;
	}
	return false;
}

static bool check_line_horizontal(stct_t *all)
{
	int p1 = 0;
	int p2 = 0;

	for (int i = 0; i < all->height; i++)
		for (int j = 0; j < all->width - 1; j++) {
			p1 = add_count(p1, all->tab[i][j + 1], all->player1);
			p2 = add_count(p2, all->tab[i][j + 1], all->player2);
		}
	if (p1 == 4) {
		printf("Congrats, player %c won!\n", all->player1);
		return true;
	} else if (p2 == 4) {
		printf("Congrats, player %c won!\n", all->player2);
		return true;
	}
	return false;
}

bool check_win(stct_t *all)
{
	if (check_line_vertical(all))
		return true;
	if (check_line_horizontal(all))
		return true;
	return false;
}
