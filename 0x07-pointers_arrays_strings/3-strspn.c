#include "holberton.h"
#include <stddef.h>
/**
 * _strspn - Get the length of a prefix substring.
 * @s: the string we're searching
 * @accept: the string that defines the prefix
 *
 * Return: The numbers of bytes that correspond
 */

unsigned int _strspn(char *s, char *accept)
{
	int ite1, ite2;
	unsigned int num = 0;

	for (ite1 = 0; s[ite1] != '\0'; ite1++)
	{
		for (ite2 = 0; accept[ite2] != '\0'; ite2++)
		{
			if (s[ite1] == accept[ite2])
			{
			num++;
			break;
			}
			else if (accept[ite2 + 1] == '\0')
			{
				return (num);
			}
		}
	}
	return (num);
}
