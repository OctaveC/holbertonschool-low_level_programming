#include "holberton.h"

/**
 * _strcpy - copy a string to another string
 * @dest: a pointer
 * @src: another pointer
 *
 * Return: Nothing
 */

char *_strcpy(char *dest, char *src)
{
	int t;

	for (t = 0; src[t] != '\0'; t++)
	{
		dest[t] = src[t];
	}
	dest[t] = '\0';
	return (dest);
}
