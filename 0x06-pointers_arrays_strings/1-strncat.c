#include "main.h"

/**
 * *_strncat -concatenates two strings
 *
 * @dest: destination
 * @src: source
 * @n: number of characters
 *
 * Return: The destination string
 */

char *_strncat(char *dest, char *src, int n)
{

	int m;
	int i;

	m = 0;

	while (dest[m])
		m++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[m + i] = src[i];
	dest[m + i] = '\0';

	return (dest);
}
