#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: the starting adress
 * @b: the input value
 * @n: number of bytes to change
 *
 * Return: The updated array
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}

	return (s);
}
