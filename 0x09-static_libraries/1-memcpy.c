#include "main.h"

/**
 * _memcpy - copies memory area
 *
 * @dest: destination of the copy
 * @src: source of the copy
 * @n: number of bytes
 *
 * Return: The copied memory
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;
	int j = n;

	for ( ; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
