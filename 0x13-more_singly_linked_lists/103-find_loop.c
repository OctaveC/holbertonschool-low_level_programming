#include "lists.h"
#include <stdio.h>

/**
 * find_listint_loop - Finds out if there's a loop in a linked list.
 * @head: The head of the list we're going to search
 *
 * Return: the address of the node where the loop starts or NULL if no loop
 */
listint_t *find_listint_loop(listint_t *head)
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
