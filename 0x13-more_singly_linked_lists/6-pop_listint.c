#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: The head of the list
 *
 * Return: The data that was in the head node
 */
int pop_listint(listint_t **head)
{
	listint_t *h;
	int data;

	if (*head == NULL)
		return (0);

	h = *head;
	data = h->n;
	*head = h->next;
	free(h);
	return (data);
}
