#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list.
 * @head: The head of the list
 * @index: The specific node we want to return
 *
 * Return: The data that was in the head node
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count;
	listint_t *placeholder;

	placeholder = head;
	for (count = 0; count < index && placeholder != NULL; count++)
	{
		placeholder = placeholder->next;
	}

	if (count < index)
		return (NULL);

	return (placeholder);
}
