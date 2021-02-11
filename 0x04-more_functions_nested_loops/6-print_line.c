#include "holberton.h"

/**
 * print_line - puts a bunch of '_'
 * @n: this is an integer
 *
 * Return: 0
 */
void print_line(int n)
{
	int c;

	if (n > 0)
	{
	for (c = 0; c <= n; c++)
	{
		_putchar('_');
	}
	}
	_putchar('\n');
}
