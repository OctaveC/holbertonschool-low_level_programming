#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers using the
 * Linear search algorithm.
 * @array: array we're searching
 * @size: size of said array
 * @value: value we're looking for
 *
 * Return: first index or -1
 */

int linear_search(int *array, size_t size, int value)
{
	unsigned int ite;

	if (array == NULL)
		return (-1);

	for (ite = 0; ite < size; ite++)
	{
		printf("Value checked array[%d] = [%d]\n", ite, array[ite]);
		if (array[ite] == value)
			return (ite);

	}
	return (-1);

}
