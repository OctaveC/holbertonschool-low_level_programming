#include "holberton.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string which length we're going to return
 *
 * Return: The lentgh of the string, moron, are you even listening?
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count += 1;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}
