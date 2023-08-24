#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list
 *
 * @h: head of the list
 *
 * Return: the number of nodes, or 0 if fail
 */

size_t print_dlistint(const dlistint_t *h)
{
	int cp = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		cp++;
		h = h->next;
	}
	return (cp);
}
