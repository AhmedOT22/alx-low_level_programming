#include <stdio.h>
#include "lists.h"

/**
 * print_list -  prints all the elements of a list_t list
 *
 * @h: pointer to the head of a linked list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes_nb = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d], %s\n", h->len, h->str);
		else
			printf("[0] (nil)");
		nodes_nb++;
		h = h->next;
	}

	return (nodes_nb);
}
