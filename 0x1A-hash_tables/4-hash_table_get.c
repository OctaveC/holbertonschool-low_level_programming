#include "hash_tables.h"

/**
 * hash_table_get - Retrieves a value associated with a key in a hash table.
 *
 * @ht: the hash table we want to inspect
 * @key: key connected to a value in our hash
 * Return: associated value if it found, NULL otherwise.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *placeholder;
	unsigned long int index;

	if (ht == NULL || key == NULL)
		return (0);

	index = key_index((unsigned char *)key, ht->size);
	placeholder = ht->array[index];

	while (placeholder != NULL)
	{
		if (strcmp(placeholder->key, key) == 0)
			return (placeholder->value);
		placeholder = placeholder->next;
	}

	return (NULL);
}
