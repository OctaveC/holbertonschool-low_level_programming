#include "holberton.h"

/**
 * print_most_numbers - Print the numbers from 0 to 9
 *
 * Return: 0
 */
void print_most_numbers(void)
{
	int c;

	for (c = '0'; c <= '9'; c++)
	{
		if ((c == '2') || (c == '4'))
		{
			c++;
		}
		_putchar(c);
	}
	_putchar('\n');
}
