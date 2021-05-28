#include "hash_tables.h"

/**
 * hash_table_set - Adds an element to the hash table.
 *
 * @ht: the hash table we want to add or update the key/value to/of
 * @key: key connected to a value in our hash
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node, *placeholder;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	placeholder = ht->array[index];

	while (placeholder != NULL)
	{
		if (placeholder && strcmp(key, placeholder->key) == 0)
		{
			free(placeholder->value);
			placeholder->value = strdup(value);
			if (placeholder->value == NULL)
				return (0);
			return (1);
		}
		placeholder = placeholder->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		free(new_node->key);
		return (0);
	}
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
