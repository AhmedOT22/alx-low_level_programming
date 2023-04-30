#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * add_node_end -  adds a new node at the end of a list_t list
 *
 * @head: pointer to the head of the list
 * @str: string
 *
 * Return: the address of the new element, or NULL if fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_node = malloc(sizeof(list_t));
	list_t *tail;
	size_t new_len = 0;

	if (str == NULL)
		return (NULL);
	if (new_node == NULL)
		return (NULL);

	while (str[new_len] != '\0')
		new_len++;

	new_node->str = strdup(str);
	new_node->len = new_len;
	new_node->next = NULL;

	if (*head == NULL)
		*head = new_node;
	else
	{
		tail = *head;
		while (tail->next)
			tail = tail->next;
		tail->next = new_node;
	}

	return (new_node);
}
