#include "holberton.h"

/**
 * print_last_digit - fairly descriptive
 * @r:  it takes an integer
 *
 * Return: the value of the last digit
 */
int print_last_digit(int r)
{

	int a, b;

	a = r % 10;
	if (a < 0)
	{
		a = -a;
	}
	b = a + '0';
	_putchar(b);
	return(a);
}
