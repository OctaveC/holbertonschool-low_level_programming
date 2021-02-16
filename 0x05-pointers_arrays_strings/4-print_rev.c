#include "holberton.h"

/**
 * print_rev - print a string, follow by a new line
 * @s: a pointer
 *
 * Return: Nothing
 */

void print_rev(char *s)
{
	int count;

	while (s[count] != '\0')
	{
		count++;
	}
	while (count >= 0)
	{
		_putchar(s[count]);
		count--;
	}
	_putchar('\n');
}
