#include "holberton.h"

/**
 * print_number - print has integer using _putchar, no matter the length
 * @n: This is an integer
 *
 * Return: 0
 */
void print_number(int n)
{
	int c = n;

	if (n < 0)
	{
		_putchar('-');
		c = -n;
	}
	if ((c / 10) != 0)
	{
		print_number(c / 10);
	}
	_putchar(c % 10 + '0');
}
