#include "holberton.h"

/**
 * _abs - return absolute value of an integer
 * @r:  it takes an integer
 *
 * Return: 0
 */
int _abs(int r)
{

	if (r > 0)
	{
		return (r);
	}
	else if (r == 0)
	{
		return (0);
	}
	else
	{
		return (r * -1);
	}
}
