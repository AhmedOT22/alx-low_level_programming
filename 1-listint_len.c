#include <stdio.h>
#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 *
 * @h: pointer to the head of the list
 *
 * Return: number of elements in the list
 */

size_t listint_len(const listint_t *h)
{
	size_t elem_nb = 0;

	if (h == NULL)
		return (NULL);

	while (h != NULL)
		elem_nb++;
		h = h->next;

	return (elem_nb);
}
