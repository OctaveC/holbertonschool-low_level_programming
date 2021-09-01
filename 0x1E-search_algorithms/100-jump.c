#include "search_algos.h"

/**
 * jump_search - Searches for a value in a sorted array of integers using the
 * Jump search algorithm.
 * @array: array we're searching
 * @size: size of said array
 * @value: value we're looking for
 *
 * Return: index of value or -1
 */

int jump_search(int *array, size_t size, int value)
{
	unsigned int ite = 0;
	unsigned int jump = sqrt(size);

	if (array == NULL)
		return (-1);

	while (array[ite] < value)
	{
		printf("Value checked array[%d] = [%d]\n", ite, array[ite]);
		ite += jump;
		if (ite >= size)
			break;
	}

	printf("Value found between indexes [%d] and [%d]\n", ite - jump, ite);
	ite -= jump;

	while (array[ite] < value)
	{
		printf("Value checked array[%d] = [%d]\n", ite, array[ite]);
		ite++;
		if (ite == size)
			return (-1);
	}

	if (array[ite] == value)
	{
		printf("Value checked array[%d] = [%d]\n", ite, array[ite]);
		return (ite);
	}
	return (-1);
}
