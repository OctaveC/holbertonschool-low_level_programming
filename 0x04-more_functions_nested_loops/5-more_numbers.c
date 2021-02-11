#include "holberton.h"

/**
 * print_most_numbers - Print the numbers from 0 to 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int c, d;

	for (c = 0; c <= 9; c++)
        {
		for (d = 0; d <= 14; d++)
		{
			if (d >= 10)
			{
			_putchar(d / 10 + '0');
			}
			_putchar(d % 10 + '0');
		}
	_putchar('\n');
	}
}
