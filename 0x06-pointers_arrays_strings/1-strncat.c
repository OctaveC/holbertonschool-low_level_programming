#include "holberton.h"

/**
 * *_strncat - Similar to strcat, but with a few differences
 * @dest: the destination string
 * @src: the source string
 * @n: the numbers of bytes to be used
 *
 * Return: A pointer to the dest string
 */


char *_strncat(char *dest, char *src, int n)
{
	int a = 0, b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}

	for (b = 0; b < n; b++)
	{
		dest[a] = src[b];
		a++;
	}

	if (dest[a - 1] != '\0')
	{
		dest[a] = '\0';
	}

	return (dest);
}
