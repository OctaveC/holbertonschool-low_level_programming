#include "holberton.h"

/**
 * swap_int - Swap the values of two integers
 * @a: a pointer
 * @b: a pointer
 *
 * Return: Nothing.
 */

void swap_int(int *a, int *b)
{
	int s;

	s = *a;
	*a = *b;
	*b = s;
}
