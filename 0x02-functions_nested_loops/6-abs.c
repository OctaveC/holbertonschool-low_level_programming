#include <holberton.h>

/**
 * _abs - return absolute value of an integer
 * @r:  it takes an integer
 *
 * Return: 0
 */
int _abs(int r);
{

	if (r > 0)
	{
		_putchar(r);
	}
	else if (r == 0)
	{
		_putchar('0');
	}
	else
	{
		_putchar(r * -1);
	}
	return (0);
}
