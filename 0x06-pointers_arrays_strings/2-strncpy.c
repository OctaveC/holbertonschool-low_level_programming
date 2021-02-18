#include "holberton.h"

/**
 * _strncpy - copy a string to another string
 * @dest: a pointer
 * @src: another pointer
 * @n: an int
 *
 * Return: Nothing
 */

char *_strncpy(char *dest, char *src, int n)
{
	int t;

	for (t = 0; src[t] != '\0' && t < n; t++)
	{
		dest[t] = src[t];
	}
	while (t < n)
	{
	dest[t] = '\0';
	t++;
	}
	return (dest);
}
