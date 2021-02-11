#include "holberton.h"

/**
 * _isdigit - checks for uppercase characters
 * @c: This might be a digit
 *
 * Return: 0
 */
int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
		return (1);
	return (0);
}
