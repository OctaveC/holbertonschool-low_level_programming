#include "holberton.h"

/**
 * _isupper - checks for uppercase characters
 * @c: This is a letter that might or might not be uppercase
 *
 * Return: 0
 */
int _isupper(int c)
{
	if ((c >= 65) && (c <= 90))
		return (1);
	return (0);
}
