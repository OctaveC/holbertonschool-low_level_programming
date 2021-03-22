#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint2 - Frees a list_t linked list and sets head to null.
 * @head: The head of the list
 *
 * Return: Nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *h;
	listint_t *placeholder;

	if (head != NULL)
	{
		placeholder = *head;
		while (placeholder != NULL)
		{
			h = placeholder;
			placeholder = placeholder->next;
			free(h);
		}
		*head = NULL;
	}
}
