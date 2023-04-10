#include "main.h"

/**
 * _strstr - locates a substring
 *
 * @haystack: string to  search for the wanted substring
 * @needle: substring to search for
 *
 * Return: a pointer in the start of the substring, or 0 if not found
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	while (*haystack != '\0')
	{
		h = haystack;
		n = needle;
		while (*n != '\0' && *haystack == *n)
		{
			haystack++;
			n++;
		}
		if (!*n)
			return (h);
		haystack++;
	}
	return ('\0');
}
