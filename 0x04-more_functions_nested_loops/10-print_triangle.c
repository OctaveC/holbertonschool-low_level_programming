#include "holberton.h"

/**
 * print_triangle - puts a bunch of '#' in the shape of a triangle
 * @size: this is an integer
 *
 * Return: 0
 */
void print_triangle(int size)
{
	int line, space, square;

	if (size > 0)
	{
	for (line = 1; line <= size; line++)
	{
		for (space = 1; space <= (size - line); space++)
		{
			_putchar(' ');
		}
		for (square = 1; square <= line; square++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
