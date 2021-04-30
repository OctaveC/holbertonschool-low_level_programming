#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - Inserts node at the nth postion in a doubly linked list.
 * @h: The head of the list
 * @idx: The index of the list where the new node will be added
 * @n: the int we're going to insert into the list
 *
 * Return: the address of the new node, or NULL if it failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int count;
	dlistint_t *placeholder, *node;

	node = malloc(sizeof(dlistint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*h == NULL)
	{
		*h = node;
		node->next = NULL;
		node->prev = NULL;
		return (node);
	}
	else if (idx == 0)
	{
		node->next = *h;
		node->prev = NULL;
		*h = node;
		return (node);
	}

	placeholder = *h;
	for (count = 0; count < (idx - 1); count++)
	{
		if (placeholder->next == NULL)
			return (NULL);
		placeholder = placeholder->next;
	}

	node->prev = placeholder;
	node->next = placeholder->next;
	placeholder->next = node;

	return (node);
}
