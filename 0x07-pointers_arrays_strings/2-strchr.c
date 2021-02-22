#include "holberton.h"
#include <stddef.h>
/**
 * _strchr - Locate a character in a string.
 * @s: the string we're searching
 * @c: the char we attempt to find
 *
 * Return: First occurence of the character, or NULL
 */

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
		{
			return (s);
		}
		s++;
	}
	if (*s == '\0')
	{
		return (s);
	}
	else
	{
	return (NULL);
	}
}
