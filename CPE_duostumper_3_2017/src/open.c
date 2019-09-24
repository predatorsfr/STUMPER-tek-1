/*
** EPITECH PROJECT, 2018
** Cesar
** File description:
** open file
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>

#include "decrypt.h"

void free_open_write(FILE *fd, int fl, char *array)
{
	close(fl);
	fclose(fd);
	free(array);
}

void open_write(FILE *fd, char **text, char **av)
{
	int fl = open("crypt", O_RDWR | O_CREAT, 0444);
	char *array = NULL;
	size_t size = 0;
	ssize_t read = getline(&array, &size, fd);
	int line = 0;
	char *cesar = NULL;

	for (line = 0; read != -1 && line < 256; line++) {
		text[line] = strdup(array);
		read = getline(&array, &size, fd);
		cesar = cesar_str(text[line], atoi(av[3]));
		write(fl, cesar, strlen(text[line]));
		free(cesar);
		free(text[line]);
	}
	free_open_write(fd, fl, array);
}

void open_read(FILE *fd, char **text)
{
	char *array = NULL;
	size_t size = 0;
	ssize_t read= getline(&array, &size, fd);
	int line = 0;
	int nbchar = 0;

	for (line = 0; read != -1; line++) {
		if (line == 0)
			nbchar = read - 1;
		text[line] = malloc(sizeof(char) * nbchar + 2);
		text[line] = strdup(array);
		read = getline(&array, &size, fd);
	}
	text[line] = 0;
	fclose(fd);
	free(array);
}

void write_string(char *str)
{
	int fd = open("crypt", O_RDWR | O_CREAT, 0444);

	write(fd, str, strlen(str));
	free(str);
	close(fd);
}
