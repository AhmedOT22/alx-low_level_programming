#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get from
 * one number to another
 *
 * @n: number
 * @m: second number
 *
 * Return: the number of bits to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int i = n ^ m;
	unsigned int counter = 0;

	while (i != 0)
	{
		counter += i & 1;
		i >>= 1;
	}

	return (counter);
}
