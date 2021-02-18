#include "holberton.h"
#include <stdio.h>

/**
 * cap_string - capitalizes each word of a string
 * @string: a string in lowercase
 *
 * Return: the capitalized string
 */

char *cap_string(char *string)
{
	int a, b;
	char separators[] = " \t\n,;.!?\"(){}";

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] >= 'a' && string[a] <= 'z')
		{
			if (a == 0)
				string[a] = string[a] - 32;
			else
			{
				for (b = 0; separators[b] != '\0'; b++)
				{
					if (separators[b] == string[a - 1])
					{
					string[a] = string[a] - 32;
					}
				}
			}
		}
	}
	return (string);
}
