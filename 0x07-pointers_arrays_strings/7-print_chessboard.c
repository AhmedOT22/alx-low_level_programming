#include "main.h"

/**
 * print_chessboard - prints the chessboard
 *
 * @a: two dimension array
 *
 * Return: void
 */

void print_chessboard(char (*a)[8])
{
	int n;
	int i;

	n = 0;

	while (n < 8)
	{
		i = 0;

		while (i < 8)
		{
			_putchar (a[n][i]);
			i++;
		}
		_putchar ('\n');
		n++;
	}
}
