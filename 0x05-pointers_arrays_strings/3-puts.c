#include "holberton.h"

/**
 * _puts - print a string, follow by a new line
 * @str: a pointer
 *
 * Return: Nothing
 */

void _puts(char *str)
{
	int n;

	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
