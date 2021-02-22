#include "holberton.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: the pointer in question
 * @to: the char we're writing to
 *
 * Return: Nothing.
 */

void set_string(char **s, char *to)
{
	*s = to;
}
