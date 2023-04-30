#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list_t list
 *
 * @head: pointer to the head of the list
 * @str: string
 *
 * Return: the head of the new list, or 0 if fail
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	size_t new_len = 0;

	if (str == NULL)
		return (NULL);

	if (new_node == NULL)
		return (NULL);

	while (str[new_len] != '\0')
		new_len++;
	if (*head == NULL)
		new_node->next = NULL;
	else
		new_node->next = *head;

	new_node->str = strdup(str);
	new_node->len = new_len;
	*head = new_node;

	return (*head);
}
