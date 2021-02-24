#include "holberton.h"

/**
 * is_prime_number - Checks if a number is prime.
 * @n: We're attempting to find out if this number is prime
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (attempt(n, 2));
}

/**
 * attempt - Attempts to find out if num is prime.
 * @num: The number we're trying to check the primeness of
 * @a : Just an int we increment using recursion
 *
 * Return: depends.
 */
int attempt(int num, int a)
{
	if (num == a)
	{
		return (1);
	}
	else if (num % a == 0)
	{
		return (0);
	}
	return (attempt(num, a + 1));
}
