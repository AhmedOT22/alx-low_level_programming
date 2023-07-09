#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to get
 * from one number to another
 *
 * @n: first number
 * @m: second number
 *
 * Return: the number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = n ^ m;
	unsigned int counter = 0;

	while (diff != 0)
	{
		counter += diff & 1;
		diff >>= 1;
	}

	return (counter);
}
