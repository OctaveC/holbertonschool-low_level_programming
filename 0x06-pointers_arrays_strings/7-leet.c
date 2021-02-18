#include "holberton.h"

/**
 * leet - turns perfectly fine sentences into leetspeak
 * @string: a string in lowercase
 *
 * Return: the leetspeak'd string
 */

char *leet(char *string)
{
	int a, b;
	char letters[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (a = 0; string[a] != '\0'; a++)
	{
		for (b = 0; letters[b] != '\0'; b++)
		{
			if (letters[b] == string[a])
			{
				string[a] = leet[b];
			}
		}
	}
	return (string);
}
