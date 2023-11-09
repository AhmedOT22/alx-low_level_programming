#include "hash_tables.h"

/**
 * create_node - creates a hash node
 *
 * @key: the key
 * @value: the value
 *
 * Return: new node, or NULL if failure
 */

hash_node_t *create_node(const char *key, const char *value)
{
	hash_node_t *node;

	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup(key);
	if (node->key == NULL)
	{
		free(node);
		return (NULL);
	}
	node->value = strdup(value);
	if (node->value == NULL)
	{
		free(node->key);
		free(node);
		return (NULL);
	}
	node->next = NULL;
	return (node);
}

/**
 * hash_table_set - adds an element to the hash table
 *
 * @ht: the hash table
 * @key: the key
 * @value: the value
 *
 * Return: new node, or NULL if failure
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int i;
	hash_node_t *node, *tmp;
	char *new_value;

	if (ht == NULL || ht->array == NULL || ht->size == 0
	|| key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	i = key_index((const unsigned char *)key, ht->size);
	tmp = ht->array[i];
	while (tmp != NULL)
	{
		if (strcmp(tmp->key, key) == 0)
		{
			new_value = strdup(value);
			if (new_value == NULL)
				return (0);
			free(tmp->value);
			tmp->value = new_value;
			return (1);
		}
		tmp = tmp->next;
	}
	node = create_node(key, value);
	if (node == NULL)
		return (0);
	node->next = ht->array[i];
	ht->array[i] = node;
	return (1);
}
