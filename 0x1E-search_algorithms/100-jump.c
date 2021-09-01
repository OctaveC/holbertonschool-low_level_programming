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
	int ite = 0;
	int jump = 0;
	int p = 0;

	if (array == NULL)
		return (-1);

	jump = sqrt(size);
	while (array[ite] < value && ite < (int)size)
	{
		p = ite;
		ite = p + jump;

		if (p < (int)size)
			printf("Value checked array[%d] = [%d]\n", p, array[p]);
	}

	if (p >= (int) size && array[size] != value)
		p -= jump;

	printf("Value found between indexes [%d] and [%d]\n", p, p + jump);

	while (array[p] < value)
	{
		if (p >= (int) size)
			break;

		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		p += 1;
	}

	if (array[p] == value)
	{
		printf("Value checked array[%d] = [%d]\n", p, array[p]);
		return (p);
	}
	return (-1);
}
