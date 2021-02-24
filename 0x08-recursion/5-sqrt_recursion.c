#include "holberton.h"

/**
 * _sqrt_recursion - Returns the natural square root of n.
 * @n: The number which natural square root we're trying to find
 *
 * Return: The square root of n
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
	{
		return (0);
	}
	return (attempt(1, n));
}

/**
 * attempt - Attempts to find the natural square room of test2.
 * @test1: We use recursion on this number to increment it
 * @test2 :The number which natural square root we're trying to find
 *
 * Return: depends.
 */

int attempt(int test1, int test2)
{
	if (test1 * test1 == test2)
	{
		return (test1);
	}
	else if (test1 * test1 > test2)
	{
		return (-1);
	}
	return (attempt(test1 + 1, test2));
}
