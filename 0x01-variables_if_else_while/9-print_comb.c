#include <stdlib.h>
#include <stdio.h>

/**
 * main -main function
 *
 * Return: Always 0
 */

int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	putchar(i + '0');
	return (0);
}
