#include "holberton.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: An unsigned long int
 * @index: The location of the bit we want to get
 *
 * Return: The bit at the given index or -1 if error
 **/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long placeholder;

	if (index > sizeof(unsigned int) * sizeof(long))
		return (-1);

	placeholder = n >> index;
	return ((placeholder & 1));
}
