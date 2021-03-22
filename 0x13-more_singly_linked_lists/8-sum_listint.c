#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - Returns the sum of all the data of a listint_t linked list.
 * @head: The head of the list
 *
 * Return: the sum of all the data, or 0, if the list is empty
 */
int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *placeholder;

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
