#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - Creates an array of chars, and fills it with c
 * @size: Size of the array
 * @c: Character the array is initialized with
 *
 * Return: A pointer to the array, or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *array;
	unsigned int ite;

	if (size == NULL)
	{
		return (NULL);
	}

	array = malloc(size * sizeof(char));
	if (array == NULL)
		return (NULL);

	for (ite = 0; ite < size; ite++)
	{
		array[ite] = c;
	}
	return (array);
}
