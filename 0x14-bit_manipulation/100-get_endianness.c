#include "holberton.h"

/**
 * get_endianness -Checks the endianness.
 *
 * Return: 0 if big endian, 1 if little endian
 **/
int get_endianness(void)
{
	unsigned int placeholder = 1;
	char *check = (char *)&placeholder;

	/* ^ Since size of character is 1 byte when the character pointer is */
	/* de-referenced it will contain only first byte of integer. If */
	/* machine is little endian then *c will be 1 (because last byte is */
	/* stored first) and if machine is big endian then *c will be 0. */

	if (*check)
		return (1);
	else
		return (0);
}
