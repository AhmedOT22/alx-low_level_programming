#include "lists.h"

/**
 * dlistint_len - returns the number of elements in a linked dlistint_t list
 *
 * @h: head of the list
 *
 * Return: the number of elements in the list
 */

size_t dlistint_len(const dlistint_t *h)
{
	int cp = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		cp++;
		h = h->next;
	}

	return (cp);


}
