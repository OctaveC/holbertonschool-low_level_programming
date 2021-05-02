#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_dnodeint - Adds a node to a doubly linked list
 * @head: The head of the list
 * @n: The address of the int to be inserted
 *
 * Return: The address of the new element, or NULL if it failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *h;

	h = malloc(sizeof(dlistint_t));
	if (h == NULL)
		return (NULL);

	h->n = n;
	h->next = *head;
	h->prev = NULL;
	if (*head != NULL)
		(*head)->prev = h;
	*head = h;
	return (*head);
}
