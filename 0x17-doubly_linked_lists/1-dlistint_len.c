#include "lists.h"
#include <stdio.h>

/**
 * dlistint_len - Returns the number of elements in a doubly linked list
 * @h: The list we're going to print
 *
 * Return: The number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
