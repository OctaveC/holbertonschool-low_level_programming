#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint_end - Adds a node at the end of a doubly linked list
 * @head: The head of the list
 * @n: The int to be inserted into the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *h;
	dlistint_t *end_node;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = NULL;
	h->prev = NULL;
	/* if the head is NULL, it is an empty list */
	if (*head == NULL)
		*head = h;
	else
	{
		/* This instance of our struct will find us the last node */
		end_node = *head;

		/* the last node's next address will necessarily be NULL. */
		while (end_node->next != NULL)
		{
			end_node = end_node->next;
		}

		/* add the h node at the end of the linked list */
		h->prev = end_node;
		end_node->next = h;
	}
	return (h);
}
