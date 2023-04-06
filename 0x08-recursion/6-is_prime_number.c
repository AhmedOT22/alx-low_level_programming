#include "main.h"

/**
 * is_prime - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: integer
 * @i: iterator
 *
 * Return: 1 if success, 0 if fail
 */

int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
	return (0 + is_prime(n, i + 1));
}

/**
 * is_prime_number - returns 1 if the input integer is a prime number,
 * otherwise return 0
 *
 * @n: integer
 *
 * Return: 1 if success, 0 if fail
 */

int is_prime_number(int n)
{
	if (n <= 0)
		return (0);
	if (n == 1)
		return (0);
	return (is_prime(n, 2));
}
