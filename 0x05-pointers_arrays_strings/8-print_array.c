#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print n elements of an array
 * @a: a pointer
 * @n: an int
 *
 * Return: Nothing
 */

void print_array(int *a, int n)
{
	int t = 0;

	for (t = 0; t <= n - 1; t++)
	{
		printf("%i", a[t]);
		if (t != n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
