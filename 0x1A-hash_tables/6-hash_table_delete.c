#include "hash_tables.h"

/**
 * hash_table_delete - Deletes a hash table.
 *
 * @ht: the hash table we want to delete
 * Return: Nothing.
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *table, *placeholder;
	unsigned long int ite;

	if (ht == NULL)
		return;

	for (ite = 0; ite <= ht->size; ite++)
	{
		for (table = ht->array[ite]; table != NULL; table = placeholder)
		{
			placeholder = table->next;
			free(table->value);
			free(table->key);
			free(table);
		}
	}

	free(ht->array);
	free(ht);
}
