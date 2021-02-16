#include "holberton.h"

/**
 * puts_half - puts only the second half of a string
 * @str: a pointer
 *
 * Return: Nothing
 */

void puts_half(char *str)
{
	int a = 0, b = 0;

	while (str[a] != '\0')
	{
		a++;
	}

	b = a / 2;

	if (a % 2 != 0)
	{
		b++;
	}

	while (b < a)
	{
		_putchar(str[b]);
		b++;
	}
	_putchar('\n');
}
