#include "holberton.h"

/**
 * print_square - puts a bunch of '\' diagonally
 * @size: this is an integer
 *
 * Return: 0
 */
void print_square(int size)
{
	int c, d;

	if (size > 0)
	{
	for (c = 1; c <= size; c++)
	{
		for (d = 1; d <= size; d++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
