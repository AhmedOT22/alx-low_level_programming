#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 *
 * @n: number
 * @index : index in the binary representation of n
 *
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);

	*n |= 1 << index;
	return (1);
}
