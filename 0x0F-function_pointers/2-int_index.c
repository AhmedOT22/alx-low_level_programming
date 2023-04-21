#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 *
 * @array: pointer on array of integer
 * @size: size of the array
 * @cmp: pointer on the function to be used to compare values
 *
 * Return: the index of the first element in the array wich cmp don't return 0,
 * or -1 if fail
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size > 0)
	{
		if (array && cmp)
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
					return (i);
			}
			return (-1);
		}
	}
	return (-1);
}
