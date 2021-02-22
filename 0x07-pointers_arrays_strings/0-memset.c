#include "holberton.h"

/*
 * _memset - fill memory with a specific byte.
 * @s: the memory area we poin to
 * @b: the byte we fill the memory with
 * @n: the number of bytes we fill
 *
 * Return: A pointer to the memory area *s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ite;

	for (ite = 1; ite < n; ite++)
	{
		s[ite] = b;
	}
	return (s);
}
