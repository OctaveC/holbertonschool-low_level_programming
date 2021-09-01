#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers using
 * the Binary search algorithm.
 * @array: array we're searching
 * @size: size of said array
 * @value: value to search for
 *
 * Return: index of our value or -1
 */

int binary_search(int *array, size_t size, int value)
{
	int ite = 0;
	int left = 0, right = size - 1, middle;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (ite = left; ite < right; ite++)
		{
			printf("%d, ", array[ite]);
		}

		printf("%d\n", array[right]);

		middle = (left + right) / 2;

		if (array[middle] < value)
		{
			left = middle + 1;
		}
		else if (array[middle] > value)
		{
			right = middle - 1;
		}
		else
		{
			return (middle);
		}

	}
	return (-1);
}
