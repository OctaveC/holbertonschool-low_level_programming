#include "holberton.h"

/**
 * _islower - print the alphabet ten times
 * @c: it is a letter
 *
 * Return: 0.
 */
int _islower(int c)
{

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
