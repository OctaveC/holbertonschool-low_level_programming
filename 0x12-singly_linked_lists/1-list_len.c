#include "lists.h"
#include <stdio.h>

/**
 * list_len - Returns the numbetr of elements in a linked list
 * @h: The list we're going to print
 *
 * Return: The number of nodes
 */
size_t list_len(const list_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
