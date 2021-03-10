#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - Executes a function on each element of an array.
 * @array: The array we're going to execute our function on each element of
 * @size: The size of the array
 * @action: Pointer to the function we're going to use on each element of array
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int ite;

	if (array == NULL && action == NULL)
		return;

	for (ite = 0; ite < size; ite++)
		action(array[ite]);
}
