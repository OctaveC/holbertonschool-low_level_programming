#include "holberton.h"

/**
 * print_diagonal - puts a bunch of '\' diagonally
 * @n: this is an integer
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int c, d;

	if (n > 0)
	{
	for (c = 1; c <= n; c++)
	{
		for (d = 1; d < c; d++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
	}
	else
	_putchar('\n');
}
