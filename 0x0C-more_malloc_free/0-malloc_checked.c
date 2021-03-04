#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Allocates the memeory necessary for b
 * @b: the int we're allocating memory for
 *
 * Return: NULL if it fails, a pointer to the memory otherwise
 */
void *malloc_checked(unsigned int b)
{
	void *pointer;

	pointer = malloc(b);

	if (pointer == NULL)
		exit(98);

	return (pointer);
}
