#include "holberton.h"

/**
 * factorial - Returns the factorial of a given number.
 * @n: The number which factorial we're going to return
 *
 * Return: The factorial of int n
 */
int factorial(int n)
{
	if (n == 1 || 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
