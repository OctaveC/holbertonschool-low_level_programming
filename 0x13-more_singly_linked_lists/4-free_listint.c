#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint - Frees a list_t linked list.
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_listint(listint_t *head)
{
	listint_t *h;
	listint_t *placeholder;

	h = head;
	while (h != NULL)
	{
		placeholder = h->next;
		/*	free(h->n); apparently this doen't need to be done*/
		free(h);
		h = placeholder;
	}
}
