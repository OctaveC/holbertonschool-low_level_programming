#include "holberton.h"

/**
 * _memcpy - Copy a memory area to another memory area.
 * @dest: the memory area we fill
 * @src: the memory area we copy
 * @n: the number of bytes we fill
 *
 * Return: A pointer to the memory area *s
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int ite;

	for (ite = 0; ite < n; ite++)
	{
		dest[ite] = src[ite];
	}
	return (dest);
}
