#include <stdlib.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to new string, or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	char *s3;
	int i, j, k, l;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		;
	for (j = 0; s2[j] != '\0'; j++)
		;

	s3 = malloc((i * sizeof(*s1)) + (j * sizeof(*s2)) + 1);

	if (s3 == NULL)
		return (NULL);

	for (k = 0, l = 0; k < (i + j + 1); k++)
	{
		if (k < i)
			s3[k] = s1[k];
		else
			s3[k] = s2[l++];
	}

	return (s3);
}
