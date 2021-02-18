#include "holberton.h"

/**
 * reverse_array - reverses an array
 * @a: a pointer
 * @n: the number of elements in the array
 *
 * Return: Nothing
 */

void reverse_array(int *a, int n)
{
	int start = 0;
	int holder;

	while (start < n)
	{
		holder = a[n - 1];
		a[n - 1] = a[start];
		a[start] = holder;
		start++;
		n--;
	}
}
