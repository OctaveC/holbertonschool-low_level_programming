#include "holberton.h"

/**
 * rot13 - Encodes a string using rot13
 * @string: a string
 *
 * Return: the rot13'd string
 */

char *rot13(char *string)
{
	int a, b;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; alpha[b] != '\0'; b++)
		{
			if (alpha[b] == string[a])
			{
				string[a] = rot13[b];
				break;
			}
		}
	}
	return (string);
}
