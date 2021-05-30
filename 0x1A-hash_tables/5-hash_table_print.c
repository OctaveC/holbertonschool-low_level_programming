#include "hash_tables.h"

/**
 * hash_table_print - Prints a hash table.
 *
 * @ht: the hash table we want to print
 * Return: Nothing.
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *table;
	unsigned long int ite;
	int check = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (ite = 0; ite <= ht->size; ite++)
	{
		for (table = ht->array[ite]; table != NULL; table = table->next)
		{
			if (check == 1)
			{
				printf("'%s': '%s'", table->key, table->value);
				check = 0;
			}
			else
				printf(", '%s': '%s'", table->key, table->value);
		}
	}

	printf("}\n");
}
