/*
** EPITECH PROJECT, 2017
** my.h
** File description:
** main header
*/

#ifndef HEADER_H_
#define HEADER_H_

#define EXIT_SUCCESS 0
#define EXIT_ERROR 84

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct stct_t
{
	char **tab;
	int width;
	int height;
	char player1;
	char player2;
	char win;
} stct_t;

void print_tab(stct_t *all);
void build_tab(stct_t *all);
bool game(stct_t *all);
bool check_win(stct_t *all);

#endif
