#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint_end - Adds a node at the end of a linked list
 * @head: The head of the list
 * @n: The int to be inserted into the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *h;
	listint_t *end_node;

	h = malloc(sizeof(listint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = NULL;
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
		end_node->next = h;
	}
	return (h);
}
