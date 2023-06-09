#include "main.h"

/**
 * _strcmp -compare two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: the difference between s1 and s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;
	int s;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			s = s1[i] - s2[i];
			break;
		}
		else
		{
			s = s1[i] - s2[i];
		}
		i++;
	}
	return (s);
}
