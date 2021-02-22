#include "holberton.h"
/**
 * _strpbrk - Search a string for a set of bytes.
 * @s: the string we're searching
 * @accept: the bytes we're looking for'
 *
 * Return: A pointer to the byte in s that matches one of the bytes in accept
 */

char *_strpbrk(char *s, char *accept)
{
	int ite1, ite2;

	for (ite1 = 0; s[ite1] != '\0'; ite1++)
	{
		for (ite2 = 0; accept[ite2] != '\0'; ite2++)
		{
			if (s[ite1] == accept[ite2])
			{
				return (&s[ite1]);
			}
		}
	}
	return ('\0');
}
