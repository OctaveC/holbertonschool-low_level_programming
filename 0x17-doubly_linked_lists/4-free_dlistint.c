#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dlistint - Frees a dlist_t doubly linked list.
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *h;
	dlistint_t *placeholder;

	h = head;
	while (h != NULL)
	{
		placeholder = h->next;
		/*free(h->n); apparently this doen't need to be done*/
		free(h);
		h = placeholder;
	}
}
