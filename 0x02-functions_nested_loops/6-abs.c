#include "main.h"

/**
 * _abs -main function
 *
 * @a: -main parameter
 *
 * Return: Always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}

