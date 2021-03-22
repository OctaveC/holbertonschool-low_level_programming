#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * insert_nodeint_at_index - Inserts node at the nth postion in a linked list.
 * @head: The head of the list
 * @idx: The index of the list where the new node will be added
 * @n: the int we're going to insert into the list
 *
 * Return: the address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int count;
	listint_t *placeholder, *node;

	node = malloc(sizeof(listint_t));
	if (node == NULL)
		return (NULL);

	node->n = n;

	if (*head == NULL)
	{
		*head = node;
		node->next = NULL;
		return (node);
	}
	else if (idx == 0)
	{
		node->next = *head;
		*head = node;
		return (node);
	}

	placeholder = *head;
	for (count = 0; count < (idx - 1); count++)
	{
		if (placeholder->next == NULL)
			return (NULL);
		placeholder = placeholder->next;
	}

	node->next = placeholder->next;
	placeholder->next = node;

	return (node);
}
