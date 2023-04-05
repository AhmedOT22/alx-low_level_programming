#include "main.h"

/**
 * print_diagonal - draws a diagonal line
 *
 * @n: number of \ to be printed
 */

void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				if (i == j)
					_putchar('\\');
				else if (i > j)
					_putchar(' ');
			}
			_putchar('\n');
		}
	}
}
