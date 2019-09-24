/*
** EPITECH PROJECT, 2018
** cesar
** File description:
** decrypt.h
*/

#ifndef HEADER_H_
#define HEADER_H_

#include <stdbool.h>

char *cesar(char **str, int index);
char *cesar_str(char *str, int index);
void open_write(FILE *fd, char **text, char **av);
void open_read(FILE *fd, char **text);
void write_string(char *str);
bool encrypt_file(char **av);
bool encrypt_string(char **av);
#endif
