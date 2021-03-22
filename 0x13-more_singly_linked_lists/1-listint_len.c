#include "lists.h"
#include <stdio.h>

/**
 * listint_len - Returns the numbetr of elements in a linked list
 * @h: The list we're going to print
 *
 * Return: The number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
