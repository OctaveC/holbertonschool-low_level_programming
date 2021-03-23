#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_listint_safe - Frees a linked list, even one that has an infinite loop
 * @h: The head of the list we're going to free
 *
 * Return: The number of nodes freed
 */
size_t free_listint_safe(listint_t **h)
{
	int count = 0, loopfla = 0;
	listint_t *check = NULL, *placeholder;

	check = find_listint_loop2(*h);

	if (h == NULL || *h == NULL)
		return (0);

	for (; (loopfla != 1 || *h != check) && *h != NULL; *h = placeholder, count++)
	{
		placeholder = (*h)->next;

		if (*h == check)
		{
			if (check == (*h)->next)
			{
				free(*h);
				break;
			}
			placeholder = placeholder->next;
			free((*h)->next);
			loopfla = 1;
			count++;
		}
		free(*h);
	}
	*h = NULL;
	return (count);
}

/**
 * find_listint_loop2 - Finds out if there's a loop in a linked list.
 * @head: The head of the list we're going to search
 *
 * Return: the address of the node where the loop starts or NULL if no loop
 */
listint_t *find_listint_loop2(listint_t *head)
{

	listint_t *search1, *search2;

	search1 = head;

	if (head == NULL)
		return (NULL);

	while (search1 != NULL)
	{
		if (search1 == search1->next)
			return (search1);
		for (search2 = head; search2 != search1; search2 = search2->next)
		{
			if (search2 == search1->next)
				return (search1->next);
		}
		search1 = search1->next;
	}
	return (NULL);
}
