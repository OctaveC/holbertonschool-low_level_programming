#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * delete_dnodeint_at_index - Deletes the node at index of a linked list.
 * @head: The head of the list
 * @index: Index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int count;
	dlistint_t *target, *node;

	target = *head;

	if (*head == NULL)
		return (-1);
	else if (index == 0)
	{
		*head = target->next;
		/*	(*head)->prev == NULL; */
		free(target);
		return (1);
	}

	for (count = 0; count < index; count++)
	{
		node = target;
		if (target->next == NULL)
			return (-1);
		target = target->next;
	}

	node->prev = target->prev;
	node->next = target->next;
	free(target);

	return (1);
}
