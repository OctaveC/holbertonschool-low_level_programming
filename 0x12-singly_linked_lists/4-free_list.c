#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Frees a list_t linked list.
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_list(list_t *head)
{
	list_t *h;
	list_t *placeholder;

	h = head;
	while (h != NULL)
	{
		placeholder = h->next;
		free(h->str);
		free(h);
		h = placeholder;
	}
}
