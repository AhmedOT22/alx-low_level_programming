#include "main.h"

/**
 * length - return the length of the string
 *
 * @s: string
 *
 * Return: the length of the string
 */

int length(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + length(s + 1));
}

/**
 * compare - compare two character of the string
 *
 * @s: string
 * @n: the smallest iterator
 * @m: the biggest iterator
 *
 * Return: 0
 */

int compare(char *s, int n, int m)
{
	if (*(s + n) == *(s + m))
	{
		if (n == m || n == m + 1)
			return (1);
		return (0 + compare(s, n + 1, m - 1));
	}
	return (0);
}

/**
 * is_palindrome - check if a string is a palindrome
 *
 * @s: string
 *
 * Return: 1 if true, 0 if false
 */

int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (compare(s, 0, length(s) - 1));
}
