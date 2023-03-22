#include "main.h"

/**
 * _isalpha -main function
 * @c: -main parameter
 *
 * Return: Always 0
 */

int _isalpha(int c)
{

	if (c >= 65 && c <= 122)
		return (1);
	else
		return (0);
}
