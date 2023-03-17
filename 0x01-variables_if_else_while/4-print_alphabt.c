#include <stdlib.h>
#include <stdio.h>


/**
 * This is a program that prints the alphabet in lowercase,
 * except e and q, followed by a new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	{
		if (i != 'q' && i != 'e')
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
