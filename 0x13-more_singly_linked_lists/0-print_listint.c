#include "lists.h"
#include <stdio.h>

/**
 * print_listint - Prints a linked list
 * @h: The list we're going to print
 *
 * Return: The number of nodes
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}
	return (count);
}
