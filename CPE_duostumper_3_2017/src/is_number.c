/*
** EPITECH PROJECT, 2017
** cesar
** File description:
** is_number
*/

int is_number(char *str)
{
	if (str[0] != '\0' && str[0] != '-' && str[0] != '+'
		&& (str[0] < '0' || str[0] > '9'))
		return 84;
	for (int i = 1; str[i] != '\0'; i++)
		if (str[i] < '0' || str[i] > '9')
			return 84;
	return 0;
}
