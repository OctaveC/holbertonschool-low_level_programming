#include "holberton.h"
#include <stdio.h>

/**
 * wildcmp - Compare two strings.
 * @s1: string that can't have wildcards
 * @s2: string that can have wildcards
 *
 * Return: Either 0 or 1
 */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}

	if (*s2 == '*')
	{
		if (*(s2 + 1) == '*')
		{
			return (wildcmp(s1, (s2 + 1)));
		}
		else if (wildcmp(s1, s2 + 1) == 1)
		{
			return (1);
		}
		else
		{
			return (wildcmp(s1 + 1, s2));
		}
	}
	return (0);
}
