/*
** EPITECH PROJECT, 2018
** cesar
** File description:
** decrypt
*/

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

char apply_on_min(char c, int index)
{
	if (c + index < 'a')
		index += 'z' - 'a' + 1;
	else if (c + index > 'z')
		index -= 'z' - 'a' + 1;
	return c + index;
}

char apply_on_maj(char c, int index)
{
	if (c + index < 'A')
		index += 'Z' - 'A' + 1;
	else if (c + index > 'Z')
		index -= 'Z' - 'A' + 1;
	return c + index;
}

char apply_cesar_on_char(char c, int index)
{
	if (c >= 'a' && c <= 'z')
		return (apply_on_min(c, index));
	else if (c >= 'A' && c <= 'Z')
		return (apply_on_maj(c, index));
	return c;
}

char *cesar(char **str, int index)
{
	char *result = NULL;
	int len = 0;
	int k = 0;

	for (size_t i = 0; str[i]; i++)
		len += strlen(str[i]);
	result = malloc(sizeof(char) * len);
	if (!result)
		return (NULL);
	for (size_t j = 0; str[j]; j++) {
		for (size_t i = 0; i < strlen(str[j]); i++) {
			result[k] = apply_cesar_on_char(str[j][i], index);
			k++;
		}
	}
	return (result);
}

char *cesar_str(char *str, int index)
{
	size_t len = strlen(str);
	char *result = malloc(sizeof(char) * len);
	int k = 0;

	if (!result)
		return (NULL);
	for (size_t i = 0; i < len; i++) {
		result[k] = apply_cesar_on_char(str[i], index);
		k++;
	}
	return (result);
}
