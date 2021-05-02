#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t linked list.
 * @head: The head of the list
 *
 * Return: the sum of all the data, or 0, if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int total = 0;
	dlistint_t *placeholder;

	if (head == NULL)
		return (total);

	placeholder = head;
	while (placeholder != NULL)
	{
		total += placeholder->n;
		placeholder = placeholder->next;
	}

	return (total);
}
