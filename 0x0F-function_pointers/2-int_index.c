#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - A function that searches for an integer in an array of values
 * @array: The array we're going to search for ints
 * @size: The number of things in the array
 * @cmp: A pointer to the function used to check if it's an int
 *
 * Return: Index of first element for which cmp function doesn't return 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int ite;

	if ((array == NULL && cmp == NULL) || size <= 0)
		return (-1);

	for (ite = 0; ite < size; ite++)
	{
		if (cmp(array[ite]) != 0)
			return (ite);
	}
	return (-1);
}
