#include <stdlib.h>
#include <stdio.h>


/**
 * This is a program that prints numbers from 0 to 9
 * with putchar()
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char i;

	for (i = '0' ; i <= '9' ; i++)
		putchar(i);
	putchar('\n');
	return (0);
}
