#include <holberton.h>

/**
 * _isalpha - it returns 1 if it's a letter, 0 otherwise
 * @c: checks if it's a letter
 *
 * Return: 0 or 1.
 */
int _isalpha(int c);
{

	if ((c >= 97) && (c <= 122))
	{
		return (1);
	}
	else if ((c >= 65) && (c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
