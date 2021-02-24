#include "holberton.h"

/**
 * is_palindrome - Checks if this is a palindrome.
 * @s: We're attempting to find out if this string is a palindrome
 *
 * Return: 1 if palindromic, 0 if not
 */
int is_palindrome(char *s)
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
