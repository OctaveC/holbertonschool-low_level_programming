#include "holberton.h"

/**
 * puts2 - print even numbered characters in a string
 * @str: a pointer
 *
 * Return: Nothing
 */

void puts2(char *str)
{
	int n;

	while (str[n] != '\0')
	{
		if (n % 2 != 0)
		{
			n += 1;
		}
		_putchar(str[n]);
		n += 1;
	}
	_putchar('\n');
}
