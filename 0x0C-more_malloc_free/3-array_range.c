#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - Creates an array of integers containing min to max values
 * @min: the minimal value
 * @max: the maximal value
 *
 * Return: NULL if it fails, a pointer to an array otherwise
 */
int *array_range(int min, int max)
{
	int *array;
	int ite, total;

	if (min > max)
		return (NULL);

	total = (max - min) + 1;
	array = malloc(total * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (ite = 0; ite < total; ite++)
	{
		array[ite] = min++;
	}
	return (array);
}
