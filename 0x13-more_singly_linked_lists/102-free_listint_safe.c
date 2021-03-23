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
	int count, loopflag = 0;
	listint_t *check = NULL, *placeholder;


	if (h == NULL || *h == NULL)
		return (0);

	check = find_listint_loop2(*h);
/*	while ((loopflag != 0 || *h != check) && *h != NULL) */
	for (count = 0; (loopflag != 0 || *h != check) && *h != NULL; *h = placeholder)
	{
		placeholder = (*h)->next;
		/*	if (*h == check && loopflag)
		{
			if (check == check->next)
			{
				free(*h);
				break;
			}
			placeholder = placeholder->next;
			loopflag = 0;
			free((*h)->next);
			break;
			} */
		if (*h == check)
		{
			/*	if (check == check->next)
			{
				free(*h);
				break;
				} */
			/*	free(*h); */
			/*		break;
			count++;
			placeholder = placeholder->next;
			free((*h)->next); */
			loopflag = 1;
		}
		free(*h);
		count++;
	}
	*h = NULL;
	return (count);
}

/**
 * find_listint_loop - Finds out if there's a loop in a linked list.
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
