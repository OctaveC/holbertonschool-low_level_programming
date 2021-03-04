#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - Allocates memory for an array of size * nmemb
 * @nmemb: our number of elements
 * @size: the size of each element in our array
 *
 * Return: NULL if it fails, a pointer to an array otherwise
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *array;
	unsigned int ite;

	if (nmemb == 0 || size == 0)
		return (NULL);

	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);

	for (ite = 0; ite < (nmemb * size); ite++)
	{
		array[ite] = 0;
	}
	return (array);
}
