#include "holberton.h"

/**
 * string_toupper - turn each lowercase character in the string into uppercase
 * @string: a string in lowercase
 *
 * Return: the uppercase'd string'
 */

char *string_toupper(char *string)
{
	int a;

	for (a = 0; string[a] != '\0'; a++)
	{
		if (string[a] >= 'a' && string[a] <= 'z')
		{
			string[a] = string[a] - 32;
/* The value of a in ASCII is 97, if we subtract 32 it becomes 65 */
/* which is the ASCII value of A. */
/* So, all lowercase letters become uppercase if we subtract 32 */
		}
	}
	return (string);
}
