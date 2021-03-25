#include "holberton.h"

/**
 * binary_to_uint - convert a binary number to an unsigned int
 * @b: binary string
 *
 * Return: numbint
 **/
unsigned int binary_to_uint(const char *b)
{
	unsigned int numint = 0, inc = 1;
	const char *numbin;
	int ite, count = 0;

	if (b == NULL)
		return (0);

	numbin = b;

	while (numbin[count] != '\0')
		count++;

	for (ite = (count - 1); ite >= 0; ite--)
	{
		if (numbin[ite] != '1' && numbin[ite] != '0')
			return (0);
		else if (numbin[ite] == '1')
			numint += inc;
		inc *= 2;
	}

	return (numint);
}
