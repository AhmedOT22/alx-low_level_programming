#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * argstostr -  concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: double pointer to array of strings
 *
 * Return: pointer to the new string if success, NULL if fail
 */

char *argstostr(int ac, char **av)
{
	char *str, *s;
	int i, j, length;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0, length = 0; i < ac; i++)
	{
		for (j = 0; *(*(av + i) + j) != '\0'; j++, length++)
			;
		length++;
	}
	length++;

	str = malloc(length * sizeof(char));

	if (str == NULL)
		return (NULL);

	s = str;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			*str = av[i][j];
			str++;
		}
		*str = '\n';
		str++;
	}

	return (s);
}
