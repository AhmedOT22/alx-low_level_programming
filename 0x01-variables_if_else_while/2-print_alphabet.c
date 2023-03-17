#include <stdio.h>
#include <stdlib.h>


/**
 * This is a program that prints the alphabet in lowercase,
 * followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
