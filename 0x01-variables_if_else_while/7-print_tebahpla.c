#include <stdlib.h>
#include <stdio.h>

/**
 * This is a program that prints the lowercase alphabet in reverse,
 * followed by a new line.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;

	for (i = 9; i >= 0 ; i--)
		printf("%d", i);
	printf("\n");
	return (0);
}
