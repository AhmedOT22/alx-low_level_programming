#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int
 *
 * @b: pointer to the binary string
 *
 * Return: the number converted, or 0 if fail
 */

unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int res = 0;

	if (b == NULL)
		return (0);

	while (b[i] != '\0')
	{
		if (b[i] == '0')
			res = (res << 1) + 0;
		else if (b[i] == '1')
			res = (res << 1) + 1;
		else
			return (0);
		i++;
	}
	return (res);
}
