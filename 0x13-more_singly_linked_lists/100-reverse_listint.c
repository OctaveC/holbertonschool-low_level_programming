#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * reverse_listint - Reverses a listint_t linked list.
 * @head: The head of the list
 *
 * Return: a pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *mirror, *placeholder;

	mirror = NULL;

	if (head == NULL || *head == NULL)
		return (NULL);

	while (*head != NULL)
	{
		placeholder = (*head)->next;
		(*head)->next = mirror;
		mirror = *head;
		*head = placeholder;
	}
	*head = mirror;
	return (mirror);
}
