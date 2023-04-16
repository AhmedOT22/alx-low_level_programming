#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 *
 * @str: string to duplicate
 *
 * Return: pointer to the new string, or NULL on failure
 */

char *_strdup(char *str)
{
	char *str2;
	int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;

	str2 = malloc(i * sizeof(*str2) + 1);

	if (str2 == NULL)
		return (NULL);

	for (j = 0; j < i; j++)
		str2[j] = str[j];
	str2[j] = '\0';

	return (str2);
}
