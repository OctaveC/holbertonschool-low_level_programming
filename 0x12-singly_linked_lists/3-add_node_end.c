#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node_end - Adds a node at the end of a linked list
 * @head: The head of the list
 * @str: The address of the string to be inserted into the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int count = 0;
	list_t *h;
	list_t *end_node;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	h->len = count;
	h->str = strdup(str);
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
