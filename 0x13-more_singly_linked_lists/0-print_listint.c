#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 *
 * @h: pointer the head of the list
 *
 * Return: the number of nodes on success, or 0 if fail
 */

size_t print_listint(const listint_t *h)
{
	size_t nodes_nb = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nodes_nb++;
	}

	return (nodes_nb);
}
