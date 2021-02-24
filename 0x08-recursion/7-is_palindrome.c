#include "holberton.h"

/**
 * is_palindrome - Checks if this is a palindrome.
 * @s: We're attempting to find out if this string is a palindrome
 *
 * Return: 1 if palindromic, 0 if not
 */
int is_palindrome(char *s)
{
	int count = 0, result;

	count = (_strlen_recursion(s) - 1);
	result = (attempt_palin(s, count, 0));
	return (result);
}

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string which length we're going to return
 *
 * Return: The lentgh of the string, (this is a function we're reusing)
 */
int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s != '\0')
	{
		count += 1;
		count += _strlen_recursion(s + 1);
	}
	return (count);
}

/**
 * attempt_palin - Uses recursion to go through the string, comparing each char
 * @s: The string which we're checking for palindromeness
 * @count: The number of char in our string
 * @revcount: an int we're going to use to point to our string, from the start
 *
 * Return: depends.
 */
int attempt_palin(char *s, int count, int revcount)
{
	if (s[count] != s[revcount])
	{
		return (0);
	}
	else if (revcount >= count)
	{
		return (1);
	}
	else
	{
		return (attempt_palin(s, count - 1, revcount + 1));
	}
}
