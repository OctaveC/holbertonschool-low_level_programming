#include "holberton.h"

/**
 * rev_string - reverse a string
 * @s: a pointer
 *
 * Return: Nothing
 */

void rev_string(char *s)
{
	int count = 0, start = 0;
	char holder;

	while (s[count] != '\0')
	{
		count++;
	}
	count = count - 1;
	while (start < count)
	{
		holder = s[count];
		s[count] = s[start];
		s[start] = holder;
		start++;
		count--;
	}
}
