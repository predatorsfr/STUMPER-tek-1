/*
** EPITECH PROJECT, 2018
** fuzz
** File description:
** bozz
*/

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int ac, char **av)
{
	int min;
	int max;
	int test;
	int db;
	int trp;
	int fb = 0;

	if (ac < 3 || ac > 3 ) {
		write(2,"ERROR\n", 6);
		return 84;
	}
	min = atoi(av[1]);
	max = atoi(av[2]);
	db = min;
	trp = min;
	test = min;
	if (min > max) {
		write(2,"ERROR\n", 6);
		return 84;
	}
	while (min <= max) {
		if (min == db || min == 0 || min == 2 || min == 4 || min == 6){
			printf("Fuzz");
			db = db + 2;
			fb++;
		}
		if( min == trp || min == 0 || min == 3 || min == 6){
			printf("Bozz");
			trp = trp + 3;
			fb++;
		}
		if ( fb == 0) {
			printf("%d",min);
		}
		min++;
		printf("\n");
		fb = 0;
	}
	return 0;
}
