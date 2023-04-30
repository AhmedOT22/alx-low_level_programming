#include <stdio.h>
#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 *
 * @h: pointer to a linked list
 *
 * Return: number of elements in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t nb = 0;

	while (h != NULL)
	{
		h = h->next;
		nb++;
	}

	return (nb);
}