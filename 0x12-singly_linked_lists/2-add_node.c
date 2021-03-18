#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * add_node - Adds a node to a linked list
 * @head: The head of the list
 * @str: The address of the string to be inserted into the list
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str)
{
	int count = 0;
	list_t *h;

	h = malloc(sizeof(list_t));
	if (h == NULL)
		return (NULL);

	while (str[count] != '\0')
		count++;

	h->len = count;
	h->str = strdup(str);
	h->next = *head;
	*head = h;
	return (*head);
}
