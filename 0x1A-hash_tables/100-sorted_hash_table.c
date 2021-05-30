#include "hash_tables.h"

/**
 * shash_table_create - Creates an sorted hash table.
 *
 * @size: size of the array
 * Return: Pointer to the newly created shash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	if (size == 0)
		return (NULL);

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);

	new_table->array = calloc(size, sizeof(shash_node_t *));
	if (new_table->array == NULL)
	{
		free(new_table);
		return (NULL);
	}

	new_table->size = size;
	new_table->shead = NULL;
	new_table->stail = NULL;

	return (new_table);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 *
 * @ht: the shash table we want to add or update the key/value to/of
 * @key: key connected to a value in our shash
 * @value: value associated with the key
 * Return: 1 if it succeeded, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *placeholder;
	unsigned long int index;
	char *copy_value;

	if (ht == NULL || ht->array == NULL || key == NULL || strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	placeholder = ht->array[index];
	while (placeholder != NULL)
	{
		if (strcmp(key, placeholder->key) == 0)
		{
			copy_value = strdup(value);
			if (placeholder->value == NULL)
				return (0);
			free(placeholder->value);
			placeholder->value = copy_value;
			return (1);
		}
		placeholder = placeholder->next;
	}
	new_node = malloc(sizeof(shash_node_t));
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
		free(new_node), free(new_node->key);
		return (0);
	}
	new_node->snext = new_node->sprev = NULL;
	new_node->next = ht->array[index], ht->array[index] = new_node;
	insert_node(ht, new_node);
	return (1);
}

/**
 * insert_node - inserts a node in a sorted hash table.
 *
 * @ht: the shash table we want to add the node to
 * @new_node: the node we're adding
 * Return: Nothing.
 */
void insert_node(shash_table_t *ht, shash_node_t *new_node)
{
	shash_node_t *temp;

	if (ht->shead == NULL && ht->stail == NULL)
	{
		ht->shead = new_node;
		ht->stail = new_node;
		return;
	}
	temp = ht->shead;
	while (temp != NULL)
	{
		if (strcmp(new_node->key, temp->key) < 0)
		{
			new_node->sprev = temp->sprev;
			new_node->snext = temp;
			temp->sprev = new_node;
			if (new_node->sprev == NULL)
				ht->shead = new_node;
			else
				new_node->sprev->snext = new_node;
			return;
		}
		temp = temp->snext;
	}
	new_node->sprev = ht->stail;
	ht->stail->snext = new_node;
	ht->stail = new_node;
}

/**
 * shash_table_get - Retrieve a value associated with key in sorted hash table.
 *
 * @ht: the shash table we want to inspect
 * @key: key connected to a value in our shash
 * Return: associated value if it found, NULL otherwise.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *placeholder;
	unsigned long int index;

	if (ht == NULL || ht->array == NULL || key == NULL)
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

/**
 * shash_table_print - Prints a sorted hash table in order.
 *
 * @ht: the shash table we want to print
 * Return: Nothing.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *table;
	int check = 1;

	if (ht == NULL || ht->array == NULL)
		return;

	table = ht->shead;
	printf("{");
	while (table != NULL)
	{
		if (check == 1)
		{
			printf("'%s': '%s'", table->key, table->value);
			check = 0;
		}
		else
			printf(", '%s': '%s'", table->key, table->value);

		table = table->snext;
	}

	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 *
 * @ht: the shash table we want to print
 * Return: Nothing.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *table;
	int check = 1;

	if (ht == NULL || ht->array == NULL)
		return;
	table = ht->stail;
	printf("{");
	while (table != NULL)
	{
		if (check == 1)
		{
			printf("'%s': '%s'", table->key, table->value);
			check = 0;
		}
		else
			printf(", '%s': '%s'", table->key, table->value);

		table = table->sprev;
	}

	printf("}\n");
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 *
 * @ht: the shash table we want to delete
 * Return: Nothing.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *table, *temp;

	if (ht == NULL)
		return;

	temp = ht->shead;
	while (table != NULL)
	{
		temp = table->snext;
		free(table->value);
		free(table->key);
		free(table);
		table = temp;
	}
	free(ht->array);
	free(ht);
}
