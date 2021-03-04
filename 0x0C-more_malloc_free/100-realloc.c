#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - Reallocates a memory block
 * @ptr: pointer to the memory previously allocated
 * @old_size: old allocated size for ptr
 * @new_size: new allocated size for ptr
 *
 * Return: NULL if it fails, a pointer to an array otherwise
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *array;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (NULL);
	}
	free(ptr);
	if (new_size == 0)
	{
		return (NULL);
	}
	array = malloc(new_size);
	return (array);
}
