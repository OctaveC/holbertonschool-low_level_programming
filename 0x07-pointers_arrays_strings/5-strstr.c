#include "holberton.h"
#include <stdio.h>

/**
 * _strstr - Locates a needle in a haystack.
 * @haystack: the string we're searching
 * @needle: the bytes we're looking for'
 *
 * Return: A pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	char *hay, *nee;
	hay = haystack;
	nee = needle;

	while (*haystack != '\0')
	{
		while (*nee == *haystack && *nee != '\0' && *haystack != '\0')
		{
			nee++;
			haystack++;
		}
		if (*nee == '\0')
		{
			return (hay);
		}
		hay++;
		haystack++;
	}
	return ('\0');
}
