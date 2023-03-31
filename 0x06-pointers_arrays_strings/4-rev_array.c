#include "main.h"

/**
 * reverse_array -reverse an array of integers
 *
 * @a: pointer of integers
 * @n: number of elements
 *
 * Return: 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = j;
	}
}
